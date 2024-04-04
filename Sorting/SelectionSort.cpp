#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int min = i;

        for(int j=i; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(arr[i] != arr[min]){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

void display(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[] = {7,5,1,3,9,2,4,8,10,6};
    int n = sizeof(arr)/sizeof(int);

    selectionSort(arr, n);
    display(arr, n);
    return 0;
}
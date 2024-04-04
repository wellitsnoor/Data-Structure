#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j = i;

        while(j > 0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;
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

    insertionSort(arr, n);
    display(arr, n);
    
    return 0;
}
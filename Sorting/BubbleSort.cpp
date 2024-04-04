#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{   
    int temp;

    for(int i=0; i<=n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr, n);
    display(arr, n);

    return 0;
}
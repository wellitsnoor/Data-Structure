#include<iostream>

using namespace std;



void sort(int data[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1; j++){
            if(data[j]>data[j+1]){
                int temp;
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
}

void print(int data[], int n){
    for(int i=0;i<=n-1;i++){
        cout<<data[i]<<endl;
    }
}

void merge(int data[], int data1[], int n, int n1){
    int total = n+n1;

    int data3[total-2];

    for(int i=0;i<=n-1; i++){
        data3[i] = data[i];
    }
    for(int j=n-1; j<=total-2; j++){
        data3[j] = data1[j];
    }

    print(data3, total-2);
}

int main(){
    int arr1[] = {51,52,53,54,55,56,57,58,59,60};
    int arr1_n = sizeof(arr1)/sizeof(int);

    int arr2[]= {1,2,3,4,5,6,7,8,9,10};
    int arr2_n = sizeof(arr2)/sizeof(int);

    merge(arr1, arr2, arr1_n, arr2_n);
}
#include<iostream>

using namespace std;

void print(int data[],  int n){
    for(int i=0; i<n; i++){
        cout<<data[i]<<endl;
    }
}

void sort(int data[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){

            if(data[j]>data[j+1]){
                int temp;
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
  
        }
    }
}

int main(){

    int data[] = {11,12,13,14,15,16,17,18,19,20};
    int n = sizeof(data)/sizeof(int);
    
    int data2[] = {1,2,3,4,5,6,7,8,9,10};
    int n1 = sizeof(data2)/sizeof(int);

    int data3[n+n1];

    for(int i=0; i<n; i++){
        data3[i] = data[i];
    }


    for(int j=n; j<n+n1; j++){
        data3[j] = data2[j-n];
    }

    sort(data3, n+n1);

    print(data3, n+n1);
}
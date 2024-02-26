// #2
// Write a program to search an element in an array using Linear Search

#include<iostream>

using namespace std;

int search(int data[], int n, int item){
    int loc = -1;

    for(int i=0; i<=n-1; i++){
        if(data[i] == item){
            loc = i+1;
            break;
        }
    }

    return loc;
}

int main(){
    int data[50], n;

    cout<<"Enter the size of array: ";
    cin>>n;

    for(int i=0; i<=n-1; i++){
        cout<<"Enter "<<i+1<<" element of array: ";
        cin>>data[i];
    }

    int item;

    cout<<endl<<"What are you looking for: ";
    cin>>item;

    int loc = search(data, n, item);

    if(loc != -1){
        cout<<endl<<"Element found at index: "<<loc;
    }
    else{
        cout<<endl<<"Element not found!";
    }

    return 0;
}
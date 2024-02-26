// #3
// Write a program to insert and delete an element in 1-D array.

#include<iostream>

using namespace std;

int print(int data[], int n){
    for(int i=0; i<=n-1; i++){
        cout<<data[i]<<endl;
    }

    return 0;
}

int main(){
    int data[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(data)/sizeof(int);

    int action;

    cout<<"Insert(1)/Delete(2)"<<endl;
    cout<<"What action do you want to perform: ";

    cin>>action;

    // Insert
    if(action == 1){
        int change, place;

        cout<<"What do you want to insert?: ";
        cin>>change;

        cout<<"Where do you want to insert it?: ";
        cin>>place;

        int data1[n+1];

        for(int i=0; i<=n-1; i++){
            data1[i] = data[i];
        }

        for(int i=n-1; i>=place-1; i--){
            data1[i+1] = data1[i];
        }

        data1[place-1] = change;

        cout<<endl;
        print(data1, n+1);
        
    }

    // Delete
    else if(action == 2){
        int change;

        cout<<"What do you want to delete: ";
        cin>>change;

        for(int i=change; i<=n-1; i++){
            data[i-1] = data[i];
        }

        print(data, n-1);
    }
    else{
        cout<<"Wrong input!";
    }

    return 0;
}
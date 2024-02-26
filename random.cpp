#include<iostream>

using namespace std;

class calculator{
    private:
        int a,b;
        char op;

    public:
        void get(){
            cout<<"Enter values of a and b: ";
            cin>>a>>b;
        }
        void getop(){
            cout<<"Addition(+)/Subtraction(-)"<<endl;
            cout<<"What do you want to do: ";
            cin>>op;
        }
        int calc(){
            switch(op){
                case '+':
                    return a+b;
                    break;
                case '-':
                    return a-b;
                    break;
                default:
                    cout<<"Error!";
                    return 0;
            }
        }
};

int main(){
    
    return 0;
}
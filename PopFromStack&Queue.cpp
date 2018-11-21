#include<iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter The Array Size:"<<endl;
    cin>>a;
    int arr[a];
    cout<<"How Many Elements Do You Want? "<<endl;
    cin>>b;
    cout<<"Enter The Elements:"<<endl;
    for(int i=0;i<b;i++){
        cin>>arr[i];
    }
    cout<<"Popping From Stack: "<<endl;
    if(b==0){
        cout<<"Underflow"<<endl;
        exit(EXIT_FAILURE);
    }
    else{
        b=b-1;
        cout<<endl;
        cout<<"After Operation:"<<endl;
        for(int i=0;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<"Popping From Queue: "<<endl;
    if(b==0){
        cout<<"Underflow"<<endl;
        exit(EXIT_FAILURE);
    }
    else{
        for(int i=0;i<b;i++){
            arr[i] = arr[i+1];
        }
        cout<<endl;
        cout<<"After Operation:"<<endl;
        for(int i=0;i<b-1;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}


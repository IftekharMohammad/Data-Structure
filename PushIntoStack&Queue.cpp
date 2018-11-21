#include<iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int x,a,b,c;
    cout<<"Enter The Array Size:"<<endl;
    cin>>x;
    int arr[x];
    cout<<"How Many Elements Do You Want? "<<endl;
    cin>>c;
    cout<<"Enter The Elements:"<<endl;
    for(int i=0;i<c;i++){
        cin>>arr[i];
    }
    cout<<"Enter The Element You Wanna Push Into Stack: "<<endl;
    cin>>a;
    if(c>=x){
        cout<<"Overflow"<<endl;
        exit(EXIT_FAILURE);
    }
    else{
        arr[c] = a;
        c=c+1;
    }
    cout<<"After Operation:"<<endl;
    for(int i=0;i<c;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter The Element You Wanna Push Into Queue: "<<endl;
    cin>>b;
    if(c>=x){
        cout<<"Overflow"<<endl;
        exit(EXIT_FAILURE);
    }
    else{
        for(int i=c;i>=0;i--){
            arr[i] = arr[i-1];
        }
        arr[0] = b;
    }
    cout<<"After Operation:"<<endl;
    for(int i=0;i<=c;i++){
        cout<<arr[i]<<" ";
    }
}

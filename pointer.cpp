#include<iostream>
using namespace std;
int main(){
    int i,length;

    cout<<"Enter the limit of the array:"<<endl;
    cin>>length;

    int arr[length];

    for(i=0;i<length;i++){
        cout<<"Enter the "<<i+1<<"th value:"<<endl;
        cin>>arr[i];
    }
    int* p = arr;
    for(i=0;i<length;i++){
        cout<<i+1<<"th value is: "<<*(p+i)<<endl;
    }
}

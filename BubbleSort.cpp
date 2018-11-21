#include<iostream>

using namespace std;

int main(){
    int i,j,temp,num;
    cout<<"Input The Length Of Array:"<<endl;
    cin>>num;
    int arr[num];
    for(i=0;i<num;i++){
        cout<<"Enter the "<< i+1<<"th value: "<<endl;
        cin>>arr[i];
    }
    for(i=0;i<num;i++){
        for(j=0;j<num-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Sorted array:"<<endl;
    for(i=0;i<num;i++){
        cout<<arr[i]<<endl;
    }
}

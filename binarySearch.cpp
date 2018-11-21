#include<iostream>

using namespace std;

int main(){
    int i,n;
    cout<<"Enter The Length Of Array:"<<endl;
    cin>>n;
    int storage[n];
    for(i=0;i<n;i++){
        cout<<"Enter "<<i+1<<"st Element:"<<endl;
        cin>>storage[i];
    }
    int start=1, last=n, mid = (start+last)/2,seek;

    cout<<"Enter The Value You Wanna find:"<<endl;
    cin>>seek;

    while(start<+last && storage[mid]!=seek){
        if(storage[mid]>seek)
            last = mid-1;
        else if(storage[mid]<seek)
            start = mid+1;
        mid = (start+last)/2;
    }
    if(storage[mid]==seek)
        cout<<"Element "<<seek<<" Found in index "<<mid<<endl;
    else
        cout<<"Value Not Found"<<endl;
    return 0;
}

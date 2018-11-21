#include<iostream>
using namespace std;

int main(){
    int i,length,search_val;

    cout<<"Enter the limit of the array: "<<endl;
    cin>>length;
    int holder[length];
    for(i=0;i<length;i++){
        cout<<"Enter the "<< i+1<<"th value: "<<endl;
        cin>>holder[i];
    }
    cout<<"Enter the number you wanna find: "<<endl;
    cin>>search_val;

    for(i=0;i<length;i++){
        if(holder[i]==search_val)
            cout<<"Found The Value"<<search_val<<"in index: "<<i<<endl;
    }


    return 0;
}


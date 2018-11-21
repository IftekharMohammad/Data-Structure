#include<iostream>
using namespace std;

int main(){
    int i,length;

    cout<<"Enter the limit of the array: "<<endl;
    cin>>length;
    int holder[length];
    for(i=0;i<length;i++){
        cout<<"Enter the "<< i+1<<"th value: "<<endl;
        cin>>holder[i];
    }

    int heightNum = holder[0];
    int lowestNum = holder[0];

    for(i=1;i<length;i++){
        if(holder[i]>heightNum)
            heightNum=holder[i];
    }

    cout<<"Hight Number is: "<<heightNum<<endl;

    for(i=1;i<length;i++){
        if(holder[i]<lowestNum)
            lowestNum=holder[i];
    }

    cout<<"Lowest Number is: "<<lowestNum<<endl;

    return 0;
}

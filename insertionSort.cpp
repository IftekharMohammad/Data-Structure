#include<iostream>

using namespace std;

int main()
{
    int sizeArr;
    cout<<"Enter The Size Of Array: "<<endl;
    cin>>sizeArr;
    int arr[sizeArr];
    int temp;
    for(int i=0; i<sizeArr; i++)
    {
        cout<<"Enter The "<<i+1<<"th value:"<<endl;
        cin>>arr[i];
    }
    for(int j=1;j<=sizeArr;j++){
        int k=j;
        while(k!=0 && arr[k-1]>arr[k]){
            temp = arr[k];
            arr[k] = arr[k-1];
            arr[k-1] = temp;
            k--;
        }
    }

    cout<<"Insertion sort is: "<<endl;
    for(int l=0; l<sizeArr; l++){
        cout<<arr[l];
        cout<<endl;
    }
}

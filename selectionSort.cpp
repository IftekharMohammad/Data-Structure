#include<iostream>

using namespace std;

int main()
{
    int sizeArr;
    cout<<"Enter The Size Of Array: "<<endl;
    cin>>sizeArr;
    int arr[sizeArr],temp,smallest,smallestIndex;
    for(int i=0; i<sizeArr; i++)
    {
        cout<<"Enter The "<<i+1<<"th value:"<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<sizeArr;i++){
        smallest = arr[i];
        smallestIndex = i;
        for(int j=i+1; j<sizeArr; j++){
            if(arr[j]<smallest){
                smallest=arr[j];
                smallestIndex = j;
            }
        }
        temp=arr[i];
        arr[i] = smallest;
        arr[smallestIndex] = temp;
    }
    cout<<"Selection sort is: "<<endl;
    for(int k=0; k<sizeArr; k++){
        cout<<arr[k];
        cout<<endl;
    }
}

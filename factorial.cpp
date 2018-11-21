#include<iostream>

using namespace std;
int factorial(int a){
    int sum=1;
    if(a<=1)
        return sum;
    else{
        sum=a*factorial(a-1);
        return sum;
    }
}

int main(){
    int n;
    cout<<"Input nth element:"<<endl;
    cin>>n;
    cout<<"The Factorial Of "<<n<<" is: "<<factorial(n)<<endl;
    return 0;
}


//int main(){
//    int n,i,sum = 1;
//    cout<<"Input nth element:"<<endl;
//    cin>>n;

//    for(i=n;i>0;i--){
//        sum=sum*i;
//    }
//    cout<<"Factorial is: "<<sum<<endl;
//    return 0;
//}

#include<iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cout<<"Enter The Array Size:"<<endl;
    cin>>a;
    int x[a];

    cout<<"How Many Elements Do You Want? "<<endl;
    cin>>b;
    if(b>a)
    {
        cout<<"Overflow"<<endl;
    }else{

        cout<<"Enter The Elements: "<<endl;
        for(int i=0;i<b;i++)
        {
            cin>>x[i];
        }

        cout<<"At Which Position You Want To Insert: "<<endl;
        cin>>c;

        for(int i=b;i>=c-1;i--)
        {
            x[i]=x[i-1];

        }
        cout<<"Type The Element Which You Want To Insert: "<<endl;
        cin>>d;
        x[c-1]=d;
        b=b+1;

        cout<<"After Operation:"<<endl;
        for(int i=0;i<b;i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
    if(b==0){
        cout<<"Underflow"<<endl;
        exit(EXIT_FAILURE);
    }else{
        cout<<"At Which Position You Want To Delete: "<<endl;
        cin>>e;

        for(int i=e-1;i<b;i++)
        {
            x[i]=x[i+1];
        }

        cout<<"After Operation:"<<endl;
        for(int i=0;i<b-1;i++)
        {
            cout<<x[i]<<" ";
        }

    }

    return 0;
}

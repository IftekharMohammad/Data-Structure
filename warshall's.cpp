#include<iostream>

using namespace std;

int main()
{
    int V = 4, INF = 99999;
    int a[V][V],b[V][V], i, j, k;
    cout<<"Input Weight: "<<endl;
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            cin>>b[i][j];

    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            if(b[i][j]==0)
                a[i][j] = INF;
            else
                a[i][j] = b[i][j];

    for (k = 0; k < V; k++){
        for (i = 0; i < V; i++){
            for (j = 0; j < V; j++){
                if (a[i][k] + a[k][j] < a[i][j])
                    a[i][j] = a[i][k] + a[k][j];
            }
        }
    }
    cout<<"Following matrix shows the shortest path between every pair of vertices: "<<endl;
    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++){
            if (a[i][j] == INF)
                cout<<"INF ";
            else
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

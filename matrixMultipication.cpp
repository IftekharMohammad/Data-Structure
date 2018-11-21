#include<iostream>
using namespace std;
int main()
{
    int x, y, i, j, m, n;

    cout <<"Enter the number of rows and columns for Matrix A:"<<endl;
    cin >> x >> y;
    int a[x][y];

    cout << "Enter the number of rows and columns for Matrix B:"<<endl;
    cin >> m >> n;
    int b[m][n];

    int c[m][y];

    if (y == m)
    {
            cout << "Enter elements for Matrix A :";
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < y; j++)
            {
                cin >> a[i][j];
            }
        }
        cout <<endl;
        cout <<endl;


        cout << "Enter elements for Matrix B :"<<endl;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> b[i][j];
            }
        }
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < m; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        cout << "\n\nMultiplication of Matrix A and Matrix B :\n\n";
        for (i = 0; i < x; i++)
        {
            for (j = 0; j < n; j++)
            {
                cout << "\t" << c[i][j];
            }
            cout << "\n\n";
        }
    }
    else
    {
        cout << "\n\nMultiplication is not possible";
    }
    return 0;
}

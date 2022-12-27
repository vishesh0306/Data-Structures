#include<iostream>
using namespace std;

int main()
{
    int n,m,sum=0;

    cout<<"enter no of rows & columns of the matrices";
    cin>>n>>m;
    int a1[n][m];
    int a2[n][m];

    cout<<"enter elements of 1st matrix : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a1[i][j];
    }

    cout<<"enter elements of 2nd matrix : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a2[i][j];
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<< a1[i][j] + a2[i][j]<<" ";
        }
        
        cout << endl;
    }
}
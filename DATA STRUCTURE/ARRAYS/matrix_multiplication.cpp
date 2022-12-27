#include<iostream>
using namespace std;

int main()
{
    int n1,n2,m1,m2,sum=0;

    cout<<"enter no of rows & columns of 1st matrix";
    cin>>n1>>n2;
    int a1[n1][n2];

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
            cin>>a1[i][j];
    }

    cout<<"enter no of rows & columns of 2nd matrix";
    cin>>m1>>m2;
    int a2[m1][m2];

    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<m2;j++)
            cin>>a2[i][j];
    }

    int mul[n1][m2];

    if(n2!=m1)
        cout<<"matrix multipliction not possible"<<endl;
    
    else
    {
        for(int i=0;i<n1;i++)
        {
            sum=0;
            for(int j=0;j<m2;j++)
            {
                sum=0;
                for(int k=0;k<n2;k++)
                {
                    sum+=a1[i][k]*a2[k][j];

                }
                cout<<sum<<" ";
            }
            cout<<endl;
        }
    }
}
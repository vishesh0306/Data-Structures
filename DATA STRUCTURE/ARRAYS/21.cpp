#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"enter rows and col of the matrix : ";
    cin>>r>>c;

    int arr[r][c];
    cout<<"enter elements of the matrix : ";

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    }

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
            cout<<arr[j][i]<<" ";
    cout<<endl;
    }
}
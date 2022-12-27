#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter no. of elements in the sorted array";
    cin>>n;

    cout<<"enter the no. of elements to insert";
    cin>>m;

    int arr[n+m];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int a[m];

    for(int i=0;i<m;i++)
        cin>>a[i];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]>arr[j])
            {
                
                int temp=arr[j+1];
                arr[j+1]=a[i];

            }
        }
    }




}
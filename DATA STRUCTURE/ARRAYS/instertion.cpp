#include<iostream>
using namespace std;

int main()
{
    // int arr[10]={1,5,2,8,4,8,4};
    // int n;
    // cout<<"enter no. to add in array : ";
    // cin>>n;

    int n,m;
    cout<<"enter size of existing array: ";
    cin>>n;
    cout<<"enter how many no. you want to add in array : ";
    cin>>m;

    int arr[n+m];

    cout<<"enter existing elements :";
    for(int i=0; i<n; i++)
        cin>>arr[i];
   
    cout<<"enter new elements :";
    for(int i=0; i<m; i++)
    {
        cin>>arr[n+i];
    }

    for(int i=0; i<n+m; i++)
        cout<<arr[i]<<" ";
    
}
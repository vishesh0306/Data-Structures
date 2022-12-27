// Program for Missing number in an array

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int diff1=arr[1]-arr[0];
    int diff2=arr[2]-arr[1];
    int diff3=arr[3]-arr[2];
    

    if(diff1==diff2)
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]+diff1 != arr[i+1])
            {
                cout<<arr[i]+diff1<<" is missing";
                break;
            }
            
        }
    }

    else if(diff1>diff2)
    {
        cout<<arr[0]+diff2<<" is missing";
        
    }
    
    else if(diff1<diff2)
    {
        cout<<arr[1]+diff1<<" is missing";
    }

}
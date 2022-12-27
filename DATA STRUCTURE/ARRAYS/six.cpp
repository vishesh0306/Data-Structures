// Program to find which element is repeated in the array and which is not

#include<iostream>
using namespace std;

int main()
{
    int a[8]={1,3,1,2,6,5,2,1};
    bool arr[8]={false};

    for(int i=0;i<8;i++)
    {
        int count=0;
        if(arr[i]==false)
        {
            for(int j=i;j<8;j++)
            {
                if(a[j]==a[i])
                {
                    arr[j]=true;
                    count++;
                }
            }
            if(count==1)
                cout<<a[i]<<" is not a repeating element"<<endl;
                
            else    
                cout<<a[i]<<" is a repeating element"<<endl;
        }
    }
}
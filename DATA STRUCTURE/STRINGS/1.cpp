#include<iostream>
using namespace std;

int len(char *ptr)
{
    int c=0;
    while(*ptr!='\0')
    {
        ptr++;
        c++;
    }
    return c;
}

int main()
{
    char str[20];
    int n;
    cout<<"Enter the String ";
    cin>>str;
    int l=len(str);
    cout<<"length of string is : " <<l;
}
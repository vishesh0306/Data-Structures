// program7 : write a c program to find cartisean product of 2 sets

#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int set1[n1],set2[n2],product[n1+n2];

    for(int i=0;i<n1;i++)
        scanf("%d",&set1[i]);
    for(int i=0;i<n2;i++)
        scanf("%d",&set2[i]);

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("(%d  %d) ",set1[i],set2[j]);    
        }
    }
    
}
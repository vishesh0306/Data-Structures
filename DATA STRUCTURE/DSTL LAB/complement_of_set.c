#include<stdio.h>
int main()
{
    int n1,n2,flag;
    printf("Enter the total elements of the universal set :\n");
    scanf("%d",&n1);

    printf("Enter the elements of universal set :\n");
    int setu[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&setu[i]);
    }

    printf("Enter the total elements of the set A :\n");
    scanf("%d",&n2);
    printf("Enter the elements of the set A :\n");
    int seta[n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&seta[i]);
    }


    printf("complement of set A is : ");
    int i;
    for(i=0;i<n1;i++)
    {
        flag = 1;
        for(int j=0;j<n2;j++)
        {
            if(setu[i]==seta[j])
            {
                flag = 0;
                break;
            }
        }
        
        if( flag == 1 )
        {
            printf("%d ",setu[i]);
        }
    }


}
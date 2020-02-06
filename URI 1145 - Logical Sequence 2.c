#include<stdio.h>
int main()
{
    int test1,test2;
    scanf("%d",&test1);
    scanf("%d",&test2);
    int i,j;

    for(i=1; i<=test2;)
    {
        for(j=1; j<=test1; j++)
        {
            if(i>test2)
            break;
            if(j==test1)
                printf("%d",i);
            else
                printf("%d ",i);
            i++;
        }
        printf("\n");
    }
    return 0;
}


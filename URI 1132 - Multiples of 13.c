#include<stdio.h>
int main()
{
    int i,j;
    int k;
    int sum=0;
    scanf("%d %d",&i,&j);
    if(i<j)
    {
    for(k=i; k<=j; k++)
    {
        if(k%13!=0)
            sum+=k;
    }

    }

    else
    {
    for(k=j; k<=i; k++)
    {
        if(k%13!=0)
            sum+=k;
    }

    }

    printf("%d\n",sum);
    return (0);
}

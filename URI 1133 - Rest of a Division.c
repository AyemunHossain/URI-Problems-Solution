#include<stdio.h>
int main()
{
    int i,j;
    int k;
    scanf("%d %d",&i,&j);
    if(i<j)
    {
    for(k=i+1; k<j; k++)
    {
        if(k%5==2 || k%5==3)
            printf("%d\n",k);
    }
    }

    else
    {
    for(k=j+1; k<i; k++)
    {
        if(k%5==2 || k%5==3)
            printf("%d\n",k);
    }
    }
    return (0);
}


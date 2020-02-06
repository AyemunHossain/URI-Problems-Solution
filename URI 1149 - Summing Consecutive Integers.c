#include<stdio.h>
int main()
{
    int x;
    int i,j=0;
    scanf("%d",&x);
    scanf("%d",&i);
    while(i<=0)
        scanf("%d",&i);

    int sum=0;
    for(j=x; j<x+i; j++)
            sum+=j;
    printf("%d\n",sum);
    return 0;
}



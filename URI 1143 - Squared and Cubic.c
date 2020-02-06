#include<stdio.h>
int main()
{
    int test,inr=0;
    scanf("%d",&test);
    while(test--)
    {
        inr++;
        printf("%d",inr);
        printf(" %d ",inr*inr);
        printf("%d\n",inr*inr*inr);
    }
}


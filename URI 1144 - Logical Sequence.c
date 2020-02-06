#include<stdio.h>
int main()
{
    int test,inr=0;
    scanf("%d",&test);
    while(test--)
    {
        inr++;
            printf("%d %d %d\n",inr,(inr*inr),(inr*inr*inr));
            printf("%d %d %d\n",inr,(inr*inr)+1,(inr*inr*inr)+1);


    }
}


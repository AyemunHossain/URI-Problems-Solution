#include<stdio.h>
int main()
{
    long long int n,factorial=1;
    scanf("%lld",&n);
    if(n>0 && n<13){
    while(n>1)
    {
        factorial=factorial*n;
        n--;
    }
        printf("%lld\n",factorial);
    }

    return (0);
}
#include <stdio.h>
int main()
{
    long long int test,n,fibo[1000],i;
    fibo[0]=0;
    fibo[1]=1;
    scanf("%lld",&test);
    if(test>=1)
    while(test--){
        scanf("%lld",&n);
        if(n>=0 && n<=60)
        {
                for(i=2; i<=n; i++)
                 {
                    fibo[i]=fibo[i-1]+fibo[i-2];
                 }
            printf("Fib(%lld) = %lld\n",n,fibo[n]);
        }
     }
    return 0;
}

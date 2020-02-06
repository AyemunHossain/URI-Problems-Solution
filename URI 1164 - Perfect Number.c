#include <stdio.h>
int main()
{
    int n,i,test,sum=0;
    scanf("%d",&test);
    if(test>=1 && test<=100)
      while(test--){
        sum=0;
        scanf("%d",&n);
        for(i=1; i<n; i++) if(n%i==0) sum+=i;
        if(n==sum) printf("%d eh perfeito\n",n);
        else printf("%d nao eh perfeito\n",n);
    }
    return 0;
}
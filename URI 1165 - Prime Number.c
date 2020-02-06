#include <stdio.h>
int main()
{
    int i,n,x,cout=0;
    scanf("%d",&n);
    while(n--)
    {
      cout=0;
      scanf("%d",&x);
      for(i=2; i<x; i++) if(x%i==0) cout++; 
      if(cout==0) printf("%d eh primo\n",x);
      else printf("%d nao eh primo\n",x);
    }
    return 0;
}


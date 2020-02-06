#include <stdio.h>
int main()
{
    int s=0,n,j;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        if(n%j==0)
             printf("%d\n",j);
    }
    return 0;
}


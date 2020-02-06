#include <stdio.h>
int main()
{
    float sum=0,count=0;
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n<0)
          break;
        sum+=n;
        count++;      
    }
    printf("%0.2f\n",((float)sum/count));
    return 0;
}


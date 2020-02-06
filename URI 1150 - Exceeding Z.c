#include <stdio.h>
int main()
{
    int x,y,count_sum=0,temp=0;
    scanf("%d",&x);
    scanf("%d",&y);
    while(y<=x)
      scanf("%d",&y);
    int i;
    for(i=x; i++;)
    {
        count_sum++;
        x=x+i;
        if(x>y)
        {
          count_sum++;
          break;
        }
    }
    printf("%d\n",count_sum);
    
    
    return 0;
}



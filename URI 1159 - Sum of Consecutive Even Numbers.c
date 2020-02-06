#include <stdio.h>
int main()
{
    int x,count=0,i=0,sum;
    while(1){
      sum=0;
      scanf("%d",&x);
      if(x==0)
        break;
      if(x%2!=0)
        x=x+1;

      for(i=1; i<=5; i+=1)
      {
        sum+=x;
        x+=2;
      }
      printf("%d\n",sum);
    }
    
    return 0;
}

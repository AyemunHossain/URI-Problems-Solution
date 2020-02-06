#include <stdio.h>
int main()
{
    int test,n,m,j,sum=0,count;
    scanf("%d",&test);
    while(test--){
      sum=0;
      count=0;
      scanf("%d %d",&n,&m);
      while(1)
      {
        if(n%2!=0)
        {

          sum+=n;
          count++;
          if(count>=m)
            break;
        }
        n++;
      }
      printf("%d\n",sum);
    }
    
    return 0;
}

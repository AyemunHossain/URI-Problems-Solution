#include<stdio.h>
int main()
{
    float i=-1.0,j=0,media=0;
    while(scanf("%f",&i)){

      if(i>=0.0 && i<=10.0)
          {
            j++;
            media+=i;
            if(j==2)
            {
              printf("media = %0.2f\n",(media/2));
              break;
            }
          }
      else
          printf("nota invalida\n");
      }
}


#include<stdio.h>
int main()
{
    float i=0,media=0;
    int j=0;
    int count=0;
    while(scanf("%f",&i)){

      if(i>=0.0 && i<=10.0)
          {
            media+=i;
            count++;
            if(count==2)
            {
              printf("media = %0.2f\n",(media/2));
              media=0;
              count=0;
              printf("novo calculo (1-sim 2-nao)\n");
              scanf("%d",&j);
              /***if you use here while(j<1 && j>2) there will be a buffer problem ***/
              while(j!=1 && j!=2)
              {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d",&j);
              }
              if(j==2)
               break;

            }
          }
      else
          printf("nota invalida\n");
      }
}


#include<stdio.h>
int main()
{
    float i;
    int j;
    for(i=0.00; i<=2.1; i+=0.20)
    {
        for(j=1; j<=3; j++)
        {
            if((float) i==(int)i || (i>=2.0))
            {
                printf("I=%d J=%d\n",(int)i,(int)(i+j));
            }
            else
            {
                printf("I=%0.1f J=%0.1f\n",i,(i+j));
            }
                
        }
    } 
    return 0;
}


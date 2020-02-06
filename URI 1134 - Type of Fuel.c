#include<stdio.h>
int main()
{
    int i=0,j=0,k=0;
    int test;
    while(1)
    {
        scanf("%d",&test);
        if(test==1)
            i++;
        else if(test==2)
            j++;
        else if(test==3)
            k++;
        else if(test==4)
            break;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",i,j,k);
}


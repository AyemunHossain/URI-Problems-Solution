#include <stdio.h>
int main()
{
    int n[5],m[5],ni=0,mi=0;
    int i,j;
    for(i=0; i<15; i++)
    {
        scanf("%d",&j);
        if(j%2==0)
        {  
            n[ni]=j;
            ni++;
            if(ni==5)
            {
                for(ni=0; ni<5; ni++)
                {
                    printf("par[%d] = %d\n",ni,n[ni]);
                }
                ni=0;
                
            }
        }
        else if(j%2!=0)
        {
            m[mi]=j;
            mi++;
            if(mi==5)
            {
                for(mi=0; mi<5; mi++)
                {
                    printf("impar[%d] = %d\n",mi,m[mi]);
                }
                    
                mi=0;
            }
        }
    }
    for(j=0; j<mi; j++)
    {
        printf("impar[%d] = %d\n",j,m[j]);
    } 
    for(i=0; i<ni; i++)
    {
        printf("par[%d] = %d\n",i,n[i]);
    } 

    return 0;
}



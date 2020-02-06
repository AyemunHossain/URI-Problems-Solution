#include <stdio.h>
int main()
{
    int i,n[1000],size,mini=0,index=0;
    scanf("%d",&size);
    for(i=0; i<size; i++){
        scanf("%d",&n[i]);
        if(mini>n[i])
            {
                mini=n[i];
                index=i;
            }
    }

    printf("Menor valor: %d\nPosicao: %d\n",mini,index);
    return 0;
}
#include <stdio.h>
int main()
{
    int arr[10],n;
    scanf("%d",&n);
    int i;
    for(i=0; i<10; i++)
    {
        arr[i]=n;
        n*=2;
    } 
    for(i=0; i<10; i++) printf("N[%d] = %d\n",i,arr[i]);
    
    return 0;
}
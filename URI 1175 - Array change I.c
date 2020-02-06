#include <stdio.h>
int main()
{
    int arr[20],arr1[20]={0},i;
    for(i=0; i<20; i++)    scanf("%d",&arr[i]);
    for(i=0; i<20; i++)    arr1[19-i]=arr[i];
    for(i=0; i<20; i++)    printf("N[%d] = %d\n",i,arr1[i]);
    return 0;
}

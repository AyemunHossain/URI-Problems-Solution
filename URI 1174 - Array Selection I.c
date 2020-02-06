#include <stdio.h>
int main()
{
    double arr[100],n;
    int i;
    for(i=0; i<100; i++)
    {
        scanf("%lf",&arr[i]);
    } 
    for(i=0; i<100; i++)
    {
        if(arr[i]<=10)
          printf("A[%d] = %0.1lf\n",i,arr[i]);
    } 
    return 0;
}



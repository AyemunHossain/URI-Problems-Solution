#include <stdio.h>
int main()
{
    double s=0,i;
    for(i=1; i<=100; i++)
        s=s+(double)1/i;
    printf("%0.2lf\n",s);
    return 0;
}

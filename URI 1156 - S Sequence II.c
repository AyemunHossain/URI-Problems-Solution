#include <stdio.h>
int main()
{
    double s=0,i,j;
    for(j=1,i=1; j<=39; j+=2)
    {
        s=s+j/i;
        i*=2;
    }
    printf("%0.2lf\n",s);
    return 0;
}

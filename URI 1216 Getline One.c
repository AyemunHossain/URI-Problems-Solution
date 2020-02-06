#include<stdio.h>
int main()
{
    char N[100];
    int c=0;
    int d;
    double total=0;
    while(scanf("%[^\n]",N)==1)
    {
        scanf("%*c%d%*c",&d);
        total+=d;
        c++;
    }
    printf("%0.1lf\n",total/c);

    return 0;
}

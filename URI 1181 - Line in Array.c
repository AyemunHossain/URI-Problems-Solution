#include<stdio.h>
int main()
{
    float arr[12][12],s=0;
    char t[2];
    int test,i,j;
    scanf("%d",&test);
    scanf("%s",&t);
    for(i=0; i<12; i++) for(j=0; j<12; j++)
    {
        scanf("%f",&arr[i][j]);
        if(i==test)
            s+=arr[i][j];
    }
    if(t[0]=='S')   printf("%0.1f\n",s);
    else if(t[0]=='M')  printf("%0.1f\n",s/12.0);
    return 0;
}

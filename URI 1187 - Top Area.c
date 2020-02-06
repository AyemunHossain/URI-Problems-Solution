#include<stdio.h>
int main()
{
    double arr[12][12],cal=0.0;
    int i,j,count=0;
    char t[2];
    scanf("%s",t);

    for(i=0; i<12; i++) for(j=0; j<12; j++){
        scanf("%lf",&arr[i][j]);

        if(j>i && j<11-i)
        {

            cal+=arr[i][j];
            count++;
        }
    }
    if(t[0]=='S')
        printf("%0.1lf\n",cal);
    else if(t[0]=='M')
        printf("%0.1lf\n",cal/(double)count);
    return (0);
}


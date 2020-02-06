#include<stdio.h>
int main()
{
    float arr[12][12];
    int i,j,count=0;
    float cal=0.0;
    char t[2];
    scanf("%s",&t);

    for(i=0; i<12; i++) for(j=0; j<12; j++){
        scanf("%f",&arr[i][j]);
        if(i<j)
        {
            cal+=arr[i][j];
            count++;
        }
    }
    if(t[0]=='S')
        printf("%0.1f\n",cal,count);
    else if(t[0]=='M')
        printf("%0.1f\n",cal/count);
    return (0);
}



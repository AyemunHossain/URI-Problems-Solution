#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d %d %d",&a,&b,&s);

    int temp;
    if(b>a)
    {
        if(s>b)
            printf("%d eh o maior\n",s);
        else
            printf("%d eh o maior\n",b);
    }
    else if(s>a)
    {
        if(s>b)
            printf("%d eh o maior\n",s);
        else
            printf("%d eh o maior\n",b);
    }
    else
        printf("%d eh o maior\n",a);
    return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],strr[1001];
    int i,len=0,l=0;
    int test;
    scanf("%d",&test);
    getchar();
    while(test--){
        gets(str);

    len=strlen(str);
    for(i=0; i<len; i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a'&& str[i]<='z'))
            str[i]=str[i]+3;
    }
    int n=0;
    for(i=len-1; i>=0; i--)
    {
        strr[n]=str[i];
        n++;
    }
    strr[n]='\0';
    
    l=len/2;
    for(i=l; i<len; i++)
    {
        strr[i]=strr[i]-1;
    }
    printf("%s\n",strr);
}
}


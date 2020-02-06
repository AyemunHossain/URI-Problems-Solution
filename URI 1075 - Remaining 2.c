#include<stdio.h>


void re(int ,int);
int main()
{
    int i;
    scanf("%d",&i);
    re(i,1);
    return (0);
}
void re(int i,int j)
{
    if(j>10000)
        return;
    if(j%i==2)
        printf("%d\n",j);
    re(i,j+1);

}

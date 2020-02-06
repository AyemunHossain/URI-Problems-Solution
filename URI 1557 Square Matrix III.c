#include<stdio.h>
int crearteMatrix();
int main()
{
    int n,i,j,k=1,l=0;
    int bigDigit=0,currentDigit=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)    break;
        int matrix[n][n];
        for(i=0; i<n; i++){
            l=k;
            for(j=0; j<n; j++){
                matrix[i][j]=l;
                l+=l;
            }k+=k;
        }

        bigDigit=countDigit(matrix[n-1][n-1]);

        for(i=0; i<n;i++)
        {
            for(j=0; j<n; j++)
            {

                currentDigit=countDigit(matrix[i][j]);

                for(k=1; k<=bigDigit-currentDigit; k++)
                    printf(" ");
                printf("%d",matrix[i][j]);

                if(j<n-1)   printf(" ");
            }printf("\n");

        }printf("\n");

    }
    return (0);
}
int countDigit(int d)
{
    int count=0;
    while(d){
        count++;
        d=d/10;
    }
    return count;

}
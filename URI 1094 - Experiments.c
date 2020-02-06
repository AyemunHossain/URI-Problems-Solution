#include<stdio.h>
int main()
{
    int an,c,r,s,tc=0,tr=0,ts=0,i,ta=0,caseNumber;
    char anN;
    float pc,pr,ps;
    scanf("%d",&caseNumber);
    for(i=1; i<=caseNumber; i++)
    {
        scanf("%d %c",&an,&anN);
        ta=ta+an;
        if (anN=='C')
        {
            tc=tc+an;
        }
        else if(anN=='S')
        {
            ts=ts+an;
        }
        else if(anN=='R')
        {
            tr=tr+an;
        }

    }
        pc=(((float)tc/(float)ta)*(float)100);
        pr=(((float)tr/(float)ta)*(float)100);
        ps=(((float)ts/(float)ta)*(float)100);
        printf("Total: %d cobaias\n",ta);
        printf("Total de coelhos: %d\n",tc);
        printf("Total de ratos: %d\n",tr);
        printf("Total de sapos: %d\n",ts);
        printf("Percentual de coelhos: %0.2f %%\n",pc);
        printf("Percentual de ratos: %0.2f %%\n",pr);
        printf("Percentual de sapos: %0.2f %%\n",ps);

    return 0;
}


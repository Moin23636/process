#include<stdio.h>
#include<conio.h>
int main()
{
    int bt[10],p[10],n,temp,i,j,wt[10],sum=0;
    float avg;
    printf("Enter total no of proces:");
    scanf("%d",&n);
    printf("\n Enter burst time for each process:-");
    for(i=0;i<n;i++)
    {
        printf("\nBurst time of process P%d:",i);
        scanf("%d",&bt[i]);
        p[i]=i;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(bt[i]>bt[j])
            {
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    return 0;
}

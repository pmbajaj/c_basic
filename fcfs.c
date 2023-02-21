#include <stdio.h>

void main()
{
    int i, p, arr[10], bur[10], ct[10], tat[10], wt[10];
    printf("Enter the number of processes: ");
    scanf("%d", &p);
    for(i=0;i<p;i++)
    {
        printf("Enter the arrival time: ");
        scanf("%d", &arr[i]);
        printf("Enter the burst time: ");
        scanf("%d", &bur[i]);
        ct[i]=ct[i-1]+bur[i];
        tat[i]=ct[i]-arr[i];
        wt[i]=tat[i]-bur[i];
    }
    printf("Process\t\tArrival\t\tBurst\t\tCompletion Time\t\tTurnaround Time\t\tWaiting Time\n");
    for(i=0;i<p;i++)
    {
    printf("%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t\t%d\n", i+1, arr[i], bur[i], ct[i], tat[i], wt[i]);
    }
}
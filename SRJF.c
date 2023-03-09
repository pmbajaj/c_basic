#include <stdio.h>
int tot =0, small = 0,pro[10], arr[10], bur[10], ct[10], tat[10], wt[10],finish[10],waiting[10];
void atsort(int a[],int b[],int n)
{
	int t,t1,min,pos,k;
	for(int i=0; i<n-1;i++)
	{
		for(int j =0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t= b[j];
				b[j]=b[j+1];
				b[j+1]=t;

				t1= a[j];
				a[j]=a[j+1];
				a[j+1]=t1;
			}
		}
	}
	for(int i =0;i<tot;i++)
	{
		small = 3200;
        for (int j = 0; j < n; j++)
        {
            if ((b[j] != 0) && (a[j] <= i) && (b[j] < small))
            {
                small = b[j];
                k = j;
            }
        }
        b[k]--;
        pro[i] = k;
    }
    k = 0;
    for (int i = 0; i < tot; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (pro[i] == j)
            {
                finish[j] = i;
                waiting[j]++;
            }
        }
    }
}
void main()
{
    int i, p;
    printf("Enter the number of processes: ");
    scanf("%d", &p);
    for(i=0;i<p;i++)
    {
       printf("Enter the arrival time: ");
       scanf("%d", &arr[i]);
       printf("Enter the burst time: ");
       scanf("%d", &bur[i]);
       wt[i] = 0;
       tot+= bur[i];
    }
	atsort(arr,bur,p);
	printf("Process\t\tArrival\t\tBurst\t\tCompletion Time\t\tTurnaround Time\t\tWaiting Time\n");
	for(i=0;i<p;i++)
    {
		printf("%d\t\t%d\t\t%d\t\t%d\t\t\t%d\t\t\t%d\n", i + 1,arr[i], bur[i], finish[i] + 1, (finish[i] - arr[i]) + 1, (((finish[i] + 1) - waiting[i]) - arr[i]));
    }
}
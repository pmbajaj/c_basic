#include<stdio.h>

void main()  
{  
    int i, NOP, sum=0,count=0, y, q, wt=0, tat=0, at[10], bt[10], temp[10];  
    float avg_wt, avg_tat;  
    printf("Total number of process in the system: "); 
    scanf("%d", &NOP);  
    y = NOP;

	for(i=0; i<NOP; i++)  
	{  
		printf("Enter the Arrival and Burst time of the Process[%d]", i+1);  
		printf("\nArrival time is: ");  
		scanf("%d", &at[i]);  
		printf("Burst time is: ");  
		scanf("%d", &bt[i]);
		temp[i] = bt[i];
	}
	printf("Enter the Time Quantum for the process: \t");  
	scanf("%d", &q);  
	printf("\nProcess \t\t BT \t\t AT \t\t TAT \t\t WT ");  
	for(sum=0, i = 0; y!=0; )  
	{  
		if(temp[i] <= q && temp[i] > 0) // define the conditions   
		{  
			sum = sum + temp[i];
			temp[i] = 0;  
			count=1;
		}     
		else if(temp[i] > 0)  
		{  
			temp[i] = temp[i] - q;  
			sum = sum + q;    
		} 
		if(temp[i]==0 && count==1)  
		{  
			y--; //decrement the process no.  
			printf("\nProcess No[%d] \t\t %d\t\t %d \t\t %d\t\t %d", i+1, bt[i],at[i], sum-at[i], sum-at[i]-bt[i]);  
			wt = wt+sum-at[i]-bt[i];  
			tat = tat+sum-at[i];  
			count =0;     
		}  
		if(i==NOP-1)  
		{  
			i=0;  
		}  
		else if(at[i+1]<=sum)  
		{  
			i++;  
		}  
		else  
		{  
			i=0;  
		}  
	}  
	avg_wt = wt * 1.0/NOP;  
	avg_tat = tat * 1.0/NOP;  
	printf("\nAverage Turn Around Time: \t%f", avg_wt);  
	printf("\nAverage Waiting Time: \t%f", avg_tat);  
}
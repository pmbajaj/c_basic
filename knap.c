#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void kp(float w[],float p[],float m,int n)
{
    float weight = 0;
    int i;
    float x[n];
    float profit =0.0,tw =0;
    for(int j=0;j<n;j++)
    {
        x[j]=0;
    }
    i=n-1;
    while(weight <= m && i>=0)
    {
        //printf("Enter the id of best remaining item:");
        //scanf("%d",&i);
        if(weight+w[i] <= m)
        {
            x[i]=1;
            weight = weight + w[i];
        }
        else
        {
            x[i] = ((m-weight)/w[i]);
            printf("%f \n",x[i]);
            break;
        }
        i--;
    }
    for(int j=0;j<n;j++)
    {
        profit = profit + (x[j]*p[j]);
        tw = tw + (x[j]*w[j]);
    }
    printf("The profit is: %f \n",profit);
    printf("The total weight is: %f",tw);
}

void main()
{
    double v=2.00/3.00;
    double vu=ceil(v);
    printf("%f",v);
    float *w,cap;
    int n;
    float *p;
    printf("Enter number of items:");
    scanf("%d",&n);
   
    w = (float*)malloc(n * sizeof(float));
    if (w == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Enter the weight of items: \n");
        for (int i = 0; i < n; ++i)
        {
            scanf("%f",&w[i]);
        }
    }
   
    p = (float*)malloc(n * sizeof(float));
    if (p == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Enter the price of items: \n");
        for (int i = 0; i < n; ++i)
        {
            scanf("%f",&p[i]);
        }
    }
    printf("Enter maximum capacity of knapsack :");
    scanf("%f",&cap);
    kp(w,p,cap,n);
}
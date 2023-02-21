#include<stdio.h>

float semo()
{
    float o[5],s1=0,avg1;
   
    printf("FOR SEM-1 \n");
   
    printf("Enter grade point in Mathematics-1: ");
    scanf("%f",&o[0]);
   
    printf("Enter grade point in BME: ");
    scanf("%f",&o[1]);
   
    printf("Enter grade point in Indian polity: ");
    scanf("%f",&o[2]);    
   
    printf("Enter grade point in BEE: ");
    scanf("%f",&o[3]);
   
    printf("Enter grade point in EG: ");
    scanf("%f",&o[4]);
   
    for(int i=0;i<5;i++)
    {
        s1+=o[i];
    }
    avg1 = s1/5;
    return avg1;
}

float semt()
{
    float t[5],s2=0.0,avg2;
   
    printf("FOR SEM-2 \n");
   
    printf("Enter grade point in Mathematics-2: ");
    scanf("%f",&t[0]);
   
    printf("Enter grade point in C-programming: ");
    scanf("%f",&t[1]);
   
    printf("Enter grade point in English Communication: ");
    scanf("%f",&t[2]);
   
    printf("Enter grade point in Basic Electrical Eng : ");
    scanf("%f",&t[3]);
   
    printf("Enter grade point in Yoga : ");
    scanf("%f",&t[4]);
   
    for(int i=0;i<5;i++)
    {
        s2+=t[i];
    }
    avg2 = s2/5;
    return avg2;
}

void main()
{
    float sem1,sem2,avg;
    sem1=semo();
    sem2=semt();
    avg=((sem1+sem2)/2);
    printf("First year result of the given student is: %f \n",avg);
   
    if(avg>9)
    {
        printf("Grade A");
    }
    else if(avg>=8 && avg<9)
    {
        printf("Grade B");
    }
    else if(avg<8 && avg>7)
    {
        printf("Grade C");
    }
    else
    {
        printf("Grade D");
    }
}

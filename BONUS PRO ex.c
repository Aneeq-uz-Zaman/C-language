#include<stdio.h>
void main()
{
    int salary,experience,bonus_task,bonus;
    printf("ENTER SALARY : ");
    scanf("%d",&salary);
    printf("ENTER Experience : ");
    scanf("%d",&experience);
    printf("ENTER BONUS TASK : ");
    scanf("%d",&bonus_task);
    if(salary=10000&&experience==2&&bonus_task==5)
        {
        printf(" BONUS : 1500");
    }

     else if(salary=10000&&experience==3&&bonus_task==10)
        {
        printf(" BONUS : 2500 ");
    }

    else if(salary=25000&&experience==3&&bonus_task==4)
    {
        printf("BONUS : 2000");
    }


    else if(salary=75000&&experience==4&&bonus_task==7)
    {
        printf("BONUS : 3500");
    }
     else if(salary=100000&&experience==5&&bonus_task==10)
     {
         printf("BONUS : 5000");
     }
      else
     {
         printf("WRONG DATA");
     }

}

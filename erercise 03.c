#include<stdio.h>//exercise:2
void main()
{
    int num,rd;
   printf("enter number : ");
   scanf("%d",&num);
   rd=num%10;
 if(num%3==0&&rd==5)
    printf("YES");
  else
        printf("NOT YES");
}




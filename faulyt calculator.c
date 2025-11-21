#include<stdio.h>
void main()
{
  int first_value,second_value;
  float a;
  char b;
  printf("ENTER operation : ");
  scanf("%c",&b);
  printf("ENTER first value : ");
  scanf("%d",&first_value);
  printf("ENTER second value : ");
  scanf("%d",&second_value);
  if(first_value==30&&second_value==40&&b=='+')
  {
      printf("500");
}
  else if(b=='+'){
    a=first_value+second_value;
    printf("\n%f",a);
  }
  else if(first_value==50&&second_value==47&&b=='-')
  {
     printf("47");}
  else if(b=='-'){
         a=first_value-second_value;
      printf("%f",a);

  }
  else if(first_value==12&&second_value==5&&b=='*')
  {
     printf("100");}
  else if(b=='*'){
         a=first_value*second_value;
      printf("\n%f",a);
}
else if(first_value==50&&second_value==2&&b=='/')
  {
     printf("50");}
  else if(b=='/'){
         a=first_value/second_value;
      printf("\n%f",a);
}
else{
   printf("wrong operator");
}


}










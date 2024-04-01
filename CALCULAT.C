#include<stdio.h>
#include<conio.h>
int main()
{
float num1,num2,result;
char op;
clrscr();
printf("Enter the two decimal numbers\n");
scanf("%f %f", &num1,&num2);
printf("\nEnter the operator\n");
op=getche();
//scanf("%c",&op);
switch(op)
{
case '+':
result=num1+num2;
printf("\nThe result is %f", result);
break;
case '-':
result=num1-num2;
printf("\nThe result is %f", result);
break;
case '*':
result=num1*num2;
printf("\nThe result is %f", result);
break;
case '/':
result=num1/num2;
printf("\nThe result is %f", result);
break;
default:
printf("\nInvalid Operator");
break;
}
getch();
return 0;
}


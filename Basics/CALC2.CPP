#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   char op;
	   float num1,num2,res;
	   printf("Enter first number : ");
	   scanf("%f",&num1);
	   printf("Enter second number : ");
	   scanf("%f",&num2);
	   printf("Operation (+,-,*,/) : ");
	   fflush (stdin);
	   scanf("%c",&op);
	   if(op=='+')res=num1+num2;
	   else if(op=='-')res=num1-num2;
	   else if(op=='*')res=num1*num2;
	   else if(op=='/')res=num1/num2;
	   else
	       {
		printf("Invalid choice");
	       }
	   printf("Result=%f",res);
	   printf("\nHave a good day");
	   getch();
	  }
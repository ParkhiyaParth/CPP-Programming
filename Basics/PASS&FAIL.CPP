#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   int m;
	   printf("Enter a marks : ");
	   scanf("%d",&m);
	   if(m<=100 && m>=80)
	       {
		printf("Distincation");
	       }
	   else if(m<80 && m>=60)
	       {
		printf("First class");
	       }
	   else if(m<60 && m>=35)
	       {
		printf("Second class");
	       }
	   else if(m<35)
	       {
		printf("Fail");
	       }
	   else
	       {
		printf("Invalid marks");
	       }
	   printf("\nHave a good day");
	   getch();
	  }
#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   int year;
	   printf("Enter a year : ");
	   scanf("%d",&year);
	   if(year%4==0)
	      {
	       printf("%d is a leap year : ");
	      }
	   else
	      {
	       printf("%d is not a leap year : ");
	      }
	   printf("\nHave a good day");
	   getch();
	  }

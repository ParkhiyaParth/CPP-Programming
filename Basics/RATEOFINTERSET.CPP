#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   float p,r,n,i;
	   printf("Enter a principal amount : ");
	   scanf("%f",&p);
	   printf("Enter a rate of interest : ");
	   scanf("%f",&r);
	   printf("Enter a number of years : ");
	   scanf("%f",&n);
	   i=(p*r*n)/100;
	   printf("Interest=%f",i);
	   printf("\nHave a good day");
	   getch();
	  }
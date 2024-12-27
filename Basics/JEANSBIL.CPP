#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   float Q,R,D,bill;
	   printf("Enter quantity : ");
	   scanf("%f",&Q);
	   printf("Enter rate : ");
	   scanf("%f",&R);
	   printf("Enter discount : ");
	   scanf("%f",&D);
	   bill=(Q*R)-(Q*R*D/100);
	   printf("Your bill=%f",bill);
	   printf("\nHave a nice day");
	   getch();
	  }

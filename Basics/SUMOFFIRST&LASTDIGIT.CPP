#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   int num,sum=0;
	   printf("Enter a number : ");
	   scanf("%d",&num);
	   sum=sum+num%10;
	   while(num>9)
		{
		 num=num/10;
		}
	   sum=sum+num;
	   printf("Sum of first and last digit=%d",sum);
	   getch();
	  }
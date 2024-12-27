#include<stdio.h>
#include<conio.h>
void main()

	  {
	   int i,num,sum=0;
	   clrscr();
	   printf("Enter five numbers : ");
	   for(i=1; i<=5; ++i)
	      {
	       scanf("%d",&num);
	       sum=sum+num;
	      }
	   printf("Average=%d",sum/5);
	   printf("\nHave a nice day");
	   getch();
	  }
#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   int temp,num,sum=0;
	   printf("Enter number : ");
	   scanf("%d",&num);
	   temp=num;
	   while(num>0)
		 {
		   sum=sum+((num%10) * (num%10) * (num%10));
		   num=num/10;
		 }

	   if(sum==temp)
	      {
	       printf("Amstrong");
	      }
	   else
	      {
	       printf("Not Amstrong");
	      }
	   getch();
	  }
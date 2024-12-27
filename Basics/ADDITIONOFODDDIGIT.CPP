#include<stdio.h>
#include<conio.h>
void main()

	 {
	  clrscr();
	  int num,sum=0,digit;
	  printf("Enter number : ");
	  scanf("%d",&num);
	  while(num>0)
	       {
		digit=num%10;
		if(digit%2!=0)
		  {
		   sum=sum+digit;
		  }
		num=num/10;
	       }
	  printf("Addition of odd digits=%d",sum);
	  getch();
	 }
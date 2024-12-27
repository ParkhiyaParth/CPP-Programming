#include<stdio.h>
#include<conio.h>
void main()

	 {
	  clrscr();
	  long int num,sum=0;
	  printf("Enter a number : ");
	  scanf("%ld",&num);
	  while(num>0)
	       {
		sum=sum*10+num%10;
		num=num/10;
	       }
	  printf("Reverse=%ld",sum);
	  getch();
	 }
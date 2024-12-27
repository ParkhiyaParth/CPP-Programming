#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   int i,n,sum=0;
	   printf("1+3+5+...+n Enter n : ");
	   scanf("%d",&n);
	   for(i=1; i<=n; i=i+2)
	      {
	       sum=sum+i;
	      }
	   printf("Sum=%d",sum);
	   getch();
	  }
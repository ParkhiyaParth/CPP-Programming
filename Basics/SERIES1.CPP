#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   int i,n,sum=0;
	   printf("1+2+3+...+n Enter n : ");
	   scanf("%d",&n);
	   for(i=1; i<=n; ++i)
	      {
	       sum=sum+i;
	      }
	   printf("Sum=%d",sum);
	   getch();
	  }
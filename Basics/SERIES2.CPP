#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   int i,n,sum=0;
	   printf("2+4+6+...+n Enter n : ");
	   scanf("%d",&n);
	   for(i=2; i<=n; i=i+2)
	      {
	       sum=sum+i;
	      }
	   printf("Sum=%d",sum);
	   getch();
	  }
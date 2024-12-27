#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   int a,b,c;
	   printf("Enter three numbers : ");
	   scanf("%d%d%d",&a,&b,&c);
	   if(a>b)
	     {
	      printf("%d is max",a);
	     }
	   else if(b>c)
	     {
	      printf("%d is max",b);
	     }
	   else
	     {
	      printf("%d is max",c);
	     }
	   printf("\nHave a good day");
	   getch();
	  }
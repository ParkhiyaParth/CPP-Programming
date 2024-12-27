#include<stdio.h>
#include<conio.h>
void main()

	  {
	   int i;
	   clrscr();
	   for(i=1; i<=100; ++i)
	      {
	       if(i%5==0 && i%7==0)
		 {
		  printf("The number diveded by 5 and 7= %d \n",i);
		 }
	      }
	   printf("\nHave a good day");
	   getch();
	  }
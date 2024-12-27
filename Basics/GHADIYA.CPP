#include<stdio.h>
#include<conio.h>
void main()

	 {
	  clrscr();
	  int i,j;
	  for(i=1; i<=10; ++i)
	     {
	      for(j=1; j<=5; ++j)
		 {
		  printf("%2d x %2d = %2d",i,j,i*j);
		 }
	      printf("\n");
	     }
	  getch();
	 }
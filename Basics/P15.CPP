#include<stdio.h>
#include<conio.h>
void main()

	 {
	  clrscr();
	  int i,j,n=5;
	  for(i=n; i>=1; --i)
	     {
	      for(j=i; j>=1; --j)
		 {
		  printf("%d",j);
		 }
	      printf("\n");
	     }
	  getch();
	 }
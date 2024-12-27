#include<stdio.h>
#include<conio.h>
void main()

	 {
	  clrscr();
	  int i,j,n=5;
	  for(i=1; i<=n; ++i)
	     {
	      for(j=i; j>=1; --j)
		 {
		  printf("%d ",j);
		 }
	      printf("\n");
	     }
	  getch();
	 }
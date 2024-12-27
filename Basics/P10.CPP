#include<stdio.h>
#include<conio.h>
void main()

	 {
	  clrscr();
	  int i,j,k,n=5;
	  for(i=n; i>=1; --i)
	     {
	      for(k=1; k<i; ++k)
		 {
		  printf(" ");
		 }
	      for(j=1; j<=n-i+1; ++j)
		 {
		  printf("%d",i);
		 }
	      printf("\n");
	     }
	  getch();
	 }
#include<stdio.h>
#include<conio.h>
void main()

	 {
	  clrscr();
	  int i;
	  for(i=1; i<=50; ++i)
	     {
	      printf("\t%d",2*i-1);
	      if(i%5==0)
		{
		 printf("\n",i);
		}
	     }
	  getch();
	 }
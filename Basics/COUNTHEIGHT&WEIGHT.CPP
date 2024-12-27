#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   float h,w;
	   int count=0,i;
	   for(i=1; i<=5; ++i)
	      {
		printf("Enter height : ");
		scanf("%f",&h);
		printf("Enter weight : ");
		scanf("%f",&w);
		if(h>=170 && w<=50)
		   {
		    count++;
		   }
	      }
	   printf("Total persons=%d",count);
	   getch();
	  }

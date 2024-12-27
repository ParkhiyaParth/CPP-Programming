#include<stdio.h>
#include<conio.h>
void main()

	  {
	   int i,j,num,sum;
	   clrscr();
	   for(i=1; i<=5; ++i)
	      {
	       sum=0;
	       printf("Enter three marks for students # %d : ",i);
	       for(j=1; j<=3; ++j)
		  {
		   scanf("%d",&num);
		   sum=sum+num;
		  }
	       printf("Average=%d \n",sum/3);
	      }
	   getch();
	  }
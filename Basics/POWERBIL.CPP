#include<stdio.h>
#include<conio.h>
void main()

	 {
	  clrscr();
	  float u,bill;
	  printf("Enter unit : ");
	  scanf("%f",&u);
	  if(u<0 && u>=100)
	    {
	     bill=u*2.5;
	    }
	    else if(u>100 && u<=200)
		 {
		  bill=u*3;
		 }
		 else if(u>200 && u<=300)
		      {
		       bill=u*3.5;
		      }
		      else
			 {
			  bill=u*4;
			 }
	  printf("Your bill=%f",bill);
	  printf("\nHave a nice day");
	  getch();
	 }
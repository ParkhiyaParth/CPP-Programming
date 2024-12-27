#include<stdio.h>
#include<conio.h>
void main()

	  {
	   clrscr();
	   int day;
	   printf("Enter a day number : ");
	   scanf("%d",&day);
	   switch(day)
		 {
		  case 1:
		     printf("Monday");
		     break;
		  case 2:
		     printf("Tuesday");
		     break;
		  case 3:
		     printf("Wednesday");
		     break;
		  case 4:
		     printf("Thursday");
		     break;
		  case 5:
		     printf("Friday");
		     break;
		  case 6:
		     printf("Saturday");
		     break;
		  case 7:
		     printf("Monday");
		     break;
		 }
	   printf("\nHave a good day");
	   getch();
	  }
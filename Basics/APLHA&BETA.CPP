#include<stdio.h>
#include<math.h>
void main()

	  {

	   float a,b,c,alpha,beta,delta;
	   printf("Enter a : ");
	   scanf("%f",&a);
	   printf("Enter b : ");
	   scanf("%f",&b);
	   printf("Enter c : ");
	   scanf("%f",&c);
	   delta=(b*b)-(4*a*c);
	   if(delta==0)
		{
		 printf("alpha=beta=%f",-b/(2*a));
		}
	   else if(delta<0)
		{
		 printf("Imaginary roots");
		}
	   else
		{
		 alpha=(-b+sqrt(delta))/2*a;
		 beta=(-b-sqrt(delta))/2*a;
		 printf("alpha=%f\n beta=%f\n",alpha,beta);
		}
	   printf("\nHave a good day");

	  }
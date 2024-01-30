#include <stdio.h>
int main()
{
int p,c;
printf("Enter the previous meter reading: ");
scanf("%d",&p);
printf("Enter the current meter reading: ");
scanf("%d",&c);
int unit = c-p;
if(unit<=100)
{
	printf("Bill amount: %f\n",(1.4*unit));
}
else if (unit>100 && unit<=200)
{
	printf("Bill amount: %f\n",(140+(2.5*(unit-100))));
}

else
{
	printf("Bill amount: %f\n",(140+250+3.2*(unit-200)));
}

return 0;
}

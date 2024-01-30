#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three numbers : ");
scanf(" %d %d %d",&a,&b,&c);
if(a>b && a>c)
{
	printf("%d is the largest among %d, %d and %d.\n",a,a,b,c);
}

else if(b>a && b>c)
{
	printf("%d is the largest among %d, %d and %d.\n",b,a,b,c);
}

else
{
	printf("%d is the largest among %d, %d and %d.\n",c,a,b,c);
}
return 0;
}

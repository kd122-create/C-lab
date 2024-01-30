#include <stdio.h>
int main()
{
char c;
printf("Enter a character : ");
scanf("%c",&c);
if(c>='a' && c<='z' || c>='A' && c<='Z')
{
	if(c == 'a' || c == 'A' || c == 'e' || c == 'E' ||c == 'i' || c == 'I' ||c == 'o' || c == 'O' ||c == 'u' || c == 'U')
	{
		printf("The enterd character %c is a vowel\n",c);
	}
	else
	{
		printf("The enterd character %c is a consonant\n",c);
	}
}
else
{
	printf("The enterd character %c is not an alphabet\n",c);
}




return 0;

}

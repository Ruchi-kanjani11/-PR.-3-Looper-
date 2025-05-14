#include<stdio.h>
#include<conio.h>
int main()
{
	int number,digitcounter=0;
	clrscr();
	printf("Enter your number: ");
	scanf("%d",&number);
	if(number<0)
	{
		number=-number;

	}
	else if(number==0)
	{
		number=1;

	}
	else
	{
		while(number>0)
		{
			number/=10;
			digitcounter++;

		}

	}

		printf("The digits of this number is: %d",digitcounter);
		getch();
}
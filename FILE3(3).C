#include<stdio.h>
#include<conio.h>
int main()
{
	int num,a,b;
	clrscr();
	printf("Enter your number:");
	scanf("%d",&num);
	b=num%10;
	while(num>=9)num=num/10;
	{

		 a=num;
		 printf("Your answer is: %d",a+b);

	}
		getch();








}
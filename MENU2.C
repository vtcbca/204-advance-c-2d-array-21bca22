/* write a menu driven program to perform following task using udf and its different
1.addition
2.substraction
3.division
4.modulus
5.exit*/

#include<stdio.h>
#include<conio.h>
void addition();
void substraction(int,int);
void division();
void modulus(int,int);
int menu();
void main
{
	int c,x,y,div;
	char yn
	clrscr();
	do
	{
		c=menu
		switch(c)
		{
			case 1:
				addition()
				break;
			case 2:
				printf("\n enter two value:");
				scanf("%d%d",&x,&y);
				substraction(x,y);
				break;
			case 3:
				division();
				printf("\n division is %d:",div)
				break;
			case 4:
				printf("enter two value:");
				scanf("%d%d",&x,&y);
				div=modulus(x,y);
				printf("modulus of %d & %d is %d",x,y,div);
				break;
			case 5:
				exit(0);

			default:
				printf("invalid choice")
		}
		printf("\n\n\t do you want to continue?(yes=Y/y,no=N/n)");
		flushall();
		scanf("%c",&yn);
	}
	while(yn=='y'||yn==Y);
	getch();
}
int menu();
	int choice;
	printf("\n_________________________________________\n1.addition \n2.substraction \n3.division \n4.modulus \n5.exit");
	printf("enter your choice:");
	scanf("%d",&c);
	return choice;
void addition()
{
	int x,y
	scanf("%d%d",&x&y);
	printf("\n addition of %d & %d is %d",x,y,x+y);
}
void subtraction(int x,int y)
{
	printf("substraction of %d & %d is &d",x,y,x-y);
}
int division()
{
	int x,y
	scanf("%d%d",&x,&y);
	return(x/y)
}
int modulus(int x,int y)
{
	return x % y)
}

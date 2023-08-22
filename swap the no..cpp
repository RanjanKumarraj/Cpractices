#include<stdio.h>
#include<conio.h>

int main()
{
	int swap,x,y;
	printf("Enter first no-\n");
	scanf("%d",&x);
	printf("Enter second no-\n");
	scanf("%d",&y);
	swap=x;
	x=y;
	y=swap;
	printf("The swaping vlaue is\n first-%d \n second-%d\n",x,y);
	return 0;
}

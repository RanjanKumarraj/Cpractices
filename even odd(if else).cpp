#include<stdio.h>
#include<conio.h>
int main()
{   
    int x;
	printf("enter any no-");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("%d is the even no.",x);
		
	}
	else
	{
		printf("%d is odd no.",x);
	}
	return 0;
}

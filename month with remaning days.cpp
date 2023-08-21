#include<stdio.h>
#include<conio.h>

int main()
{
	int days,mon,rem;
	printf("Enter a days-\n");
	scanf("%d",&days);
	mon=days/30;
	printf("Total month is  %d\n",mon);
	rem=days%30;
	printf("Remaning days is-%d",rem);
	return 0;
}

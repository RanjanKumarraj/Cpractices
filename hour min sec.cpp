#include<stdio.h>
#include<conio.h>

int main()
{
	int sec,hr,min,s;
	printf("Enter the time in second-\n ");
	scanf("%d",&sec);
	hr=sec/3600;
	sec=sec%3600;
	min=sec/60;
	s=sec%60;
	
	printf("Hour is-%d\n minute is %d\n second is %d\n",hr,min,s);
	return 0;
	
}

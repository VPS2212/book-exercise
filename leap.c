#include<stdio.h>
int main()
{
	int year;
	printf("Enther the Year:\n");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("Entered Year is Leap");
	}	else
	{
				printf("Entered year is not leap");
	}
	
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,max;
	printf("Enter values for a and b:\n");
	scanf("%d%d",&a,&b);
	max=a>b ? a :b; // ternary operator//
	printf("Larger of %d and %d is %d\n",a,b,max);
	return 0;
}


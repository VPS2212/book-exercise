#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("Enther the Numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
			big=a;
		else
			big=c;
	}
	else
	{
		if(b>c)
			big=b;
		else
			big=c;
	}
	printf("Biggest number is %d\n",big);
	return 0;
}

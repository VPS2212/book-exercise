#include<stdio.h>
int main()
{
	int a=2,b=1,c,d;
	c=a<b;
	d=(a>b)&&(c<b); // && And Operator used for condition check true or false
	printf("c=%d, d=%d\n",c,d);
	return 0;
}

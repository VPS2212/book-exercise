#include<stdio.h>
int main()
{
	int d,m,y;
	int flag=1,isleep=0;

	printf("Enter date(dd/mm/yyyy):");
	scanf("%d%d%d",&d,&m,&y);

	if(y%100!=0 && y%4==0 || y%400==0)
		isleep=1;
	if(y<1850 || y>2050 || m<1 || m>12 || d<1 || d>31)
		flag=0;
	else if(m==2) //check for number of days in feb * //
	{
		if(d==30 || d==31 || (d==29 && !isleep) )
			flag =0;
	}
	else if(m==4 || m==6 || m==9 || m==11 )// check the days in apirlm,june,sep,nov //
					{
						if (d==31)
							flag =0;
					}
	if(flag==0)
		printf("Entered date is not valid\n");
	else 
		printf("Entered date is valid\n");
	return 0;
}

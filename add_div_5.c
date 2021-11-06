//program for add INT >100 and <200 and div by 5

#include<stdio.h>
int main()
{
	int add=0,i;
	for(i=101;i<200;i++)
	{
		if(i%5==0)
		{
			printf("\n%d",i);
			add=add+i;
		}
	}
			printf("\n%d",add);
}

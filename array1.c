//find sum of positive and negative numbers

#include<stdio.h>
int main()
{
	int max,i,pos=0,neg=0; 
	printf("enter the size of total no");
	scanf("%d",&max);
	int a[max];
	
	printf("enter all positive and negative numbers");
	for(i=1;i<=max;i++)
		scanf("%d",&a[i]);
	
	for(i=1;i<=max;i++)
	{
		if(a[i]>=0)
			pos=pos+a[i];
		if(a[i]<0)
			neg=neg+a[i];
	}
	printf("sum of positive numbers are %d\n",pos);
	printf("sum of negative numbers are %d\n",neg);
}

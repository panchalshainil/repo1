//minimum and maximum of given numbers using array

#include<stdio.h>
int main()
{
	int max=0,min=0,n,i;
	printf("enter the size of total no");
	scanf("%d",&n);
	int a[n];
	
	printf("enter all numbers");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
	for(i=1;i<=n;i++)
	{
		if(a[i]>max)
			max=a[i];
		if(a[i]<max)
			min=a[i];
	}
	printf("max=%d\n",max);
	printf("min=%d",min);
}

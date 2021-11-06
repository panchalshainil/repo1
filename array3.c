// program to find first two max no in array

#include<stdio.h>
int main()
{
	int i,n,max1=0,max2=0;
	printf("enter the size of array");
	scanf("%d",&n);
	int a[n];
	
	printf("enter the elements");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);

	for(i=1;i<=n;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];	
		}
		else if(a[i]>max2 && a[i]!=max1)
			max2=a[i];
	}
	
	printf("max1 \t %d\n",max1);
	printf("max2 \t %d",max2);
	return 0;
}

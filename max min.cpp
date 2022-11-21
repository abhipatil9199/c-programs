#include<stdio.h>
main()
{
	int a[5],n,max,min,i;
	printf("enter a number = ");
	scanf("%d",&n);
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<=4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\n maximum number = %d",max);
	printf("\n minimum number = %d",min);
}

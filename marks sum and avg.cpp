#include<stdio.h>
main()
{
	 int marks[5],sum=0,avg=0,i;
	 printf("\n Enter marks of 5 subjects = ");
	 
	 for(i=0;i<=4;i++)
	 {
	 	 scanf("\n %d",&marks[i]);
	 }
	 for(i=0;i<=4;i++)
	 {
	 	sum=sum+marks[i];
	 }
	 avg=sum/5;
	 printf("\n sum = %d",sum);
	 printf("\n avg = %d",avg);
}

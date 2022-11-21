#include<stdio.h>
main()
{
	 int a[5],esum=0,osum=0,i;
	 
	 printf("\n Enter numbers = ");
	 
	 for(i=0;i<=4;i++)
	 {
	 	 scanf("\n %d",&a[i]);
	 }
	 for(i=0;i<=4;i++)
	 {
	 	 if(a[i]%2==0)
	 	  {
	 	  	 esum=esum+a[i];
		   }
		   else
		   {
		   	 osum=osum+a[5];
		   }
	 }
	 printf("\n sum of even number = %d",esum);
	 printf("\n sum of odd number = %d",osum);
	 
}

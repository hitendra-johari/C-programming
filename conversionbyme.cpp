#include<stdio.h>
int main()
{
	int a;
	printf("enter your no.:");
	scanf("%d",&a);
	int num=0;
	int rem=0;
	for(int b=1; b<=a; b++)
	{
		 num=a%2;
		 rem=a/2;
	  if(rem==1)
	  {
	    printf("%d",num);
	  	if(rem==1)
	  	{
	  		num=1;
	  		printf("%d",num);
	  		a=0;
		}
	  }
	  else
	  {
		  printf("%d",num);	
	  }
	  a=rem;	
	}
//	for(int c=r-1; c>=0; c--)
//	{
//		printf("%d",arr[c]);
//	}
}
#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n<2)
	{
 		printf("1",n);
		return 0;
	}
	int count=0,i;
	for( i =2 ; i <= sqrt(n); i++)
	{
		if(n%i==0)	
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("\n%d la so nguyen to",n);
	}
	else
	{ 
		printf("n%d ko la so nguyen to",n);
	}
}

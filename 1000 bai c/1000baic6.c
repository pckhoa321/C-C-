#include<stdio.h>


int main()
{
	int i, n;
	float S;
	S = 0;
	i = 1;
	do
	{
		scanf("%d", &n);
		if(n < 1)
		{
			printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
		}
	}while(n < 1);

	for(i = 1; i <= n; i++)
	{
		S = S + 1.0 / (i * (i + 1));
    }
	printf("%.2f", S);

	return 0;
}

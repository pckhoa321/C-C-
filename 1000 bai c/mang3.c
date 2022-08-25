#include<stdio.h>

void input_arr(int a[], int n)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

int find_max(int a[], int n)
{  
    int i;
	int max = a[0];
	for ( i = 0; i < n; i++)
	{
		if (a[i] > max) max = a[i];
	}
	return max;
}
int main()
{
	int a[100];
	int n, i;
	int max, max2 = a[0];
	do
	{
		scanf("%d", &n);
	} while (n < 2);
	input_arr(a, n);
	max = find_max(a, n);
	for ( i = 0; i < n; i++)
	{
		if (a[i] != max && a[i] > max2) max2 = a[i];
	}
	printf("%d", max2);
	return 0;
}

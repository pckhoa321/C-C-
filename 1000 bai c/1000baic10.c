#include<stdio.h>

int main(){
	int i, n, x;
	scanf("%d %d", &x, &n);
	int s=1;
	for(i = 1; i <= n; i++){
		s*=x;
	}
	printf("%d", s);	
	
	return 0;
}

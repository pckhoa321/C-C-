#include<stdio.h>

int main(){
	int i, n, s;
	scanf("%d", &n);
	s=1;
	for(i = 1; i <= n; i++){
		s*=i;
	}
	printf("%d", s);
	
	return 0;
}

#include<stdio.h>

int main(){
	int i, n, x, s, p;
	scanf("%d %d", &x, &n);
	p=1;
	s=0;
	for(i = 1; i <= n; i++){
		p*=x;
		s+=p;
	}
	printf("%d", s);
	
	return 0;
}

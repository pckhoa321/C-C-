#include<stdio.h>

int main(){
	int i, n, s, p;
	p=1;
	s=0;
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		p*=i; // nh�n
		s+=p; // c�ng
	}
	printf("%d", s);
	
	
	
	
	return 0;
}

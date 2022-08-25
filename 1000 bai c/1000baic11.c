#include<stdio.h>

int main(){
	int i, n, s, p;
	p=1;
	s=0;
	scanf("%d",&n);
	for(i = 1; i <= n; i++){
		p*=i; // nhân
		s+=p; // công
	}
	printf("%d", s);
	
	
	
	
	return 0;
}

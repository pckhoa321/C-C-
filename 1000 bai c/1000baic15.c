#include<stdio.h>

int main(){
	int i, n, s;
	float p;
	scanf("%d", &n);
	p=0;
	s=0;
	for(i = 1; i <= n; i++){
		s+=i;
		p+=1.0/s;
	}
	printf("%.2f", p);
	
	
	return 0;
}

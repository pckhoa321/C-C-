#include<stdio.h>

int main(){
	int i, n ;
	float s;
	scanf("%d", &n);
	s = 0;
	for(i = 0; i <= n; i++){
		s+=(1.0/(2*i+1));
	}
	printf("%.2f", s);
	
	
	
	
	return 0;
}

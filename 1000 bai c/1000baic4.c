#include<stdio.h>

int main(){
	int i, n;
	float s;
	scanf("%d", &n);
	s=0;
	for(i = 1; i <= n; i++){
	  s+=(1.0/2*i);
    }
	printf("%.2f", s);  
	
	
	
	
	return 0;
}

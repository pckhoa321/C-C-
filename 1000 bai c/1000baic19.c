#include<stdio.h>
#include<math.h>
int main(){
	int i, n;
	float s, x;
	long N, a;
	scanf("%f%d", &x, &n);
	do {
		if(n<1)
		 printf("Loi");
	}while(n<1);
	s=1;
	N=1;
	for(i = 0; i <= n; i++){
	  a=N+i;
	  s+=pow(x,2*i+1)/a;
	}
	
	printf("%.2f", s);
	
	return 0;
}

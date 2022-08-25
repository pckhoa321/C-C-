#include<stdio.h>

int main(){
	int i, n, x, s;
	float tong;
	tong=0;
	scanf("%d%d", &n, &x);
	int p=1;
	 s=0;
	for(i = 1; i <= n; i++){
		p*=x;
		s+=i;
		tong+=1.0*p/s;
    }
    printf("%.2f", tong);
	return 0;
}

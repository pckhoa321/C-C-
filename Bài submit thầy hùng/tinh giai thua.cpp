#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	long long giaiThua=1;
	for(int i=1;i<=n;i++){
		giaiThua*=i;}
		printf("%lld",giaiThua);
return 0;
}


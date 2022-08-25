#include<stdio.h>

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(b == 0)
	printf("0");
	else{
	int cong,tru,nhan,chiaDu;
	float chia;
	cong=a+b;
	tru=a-b;
	nhan=a*b;
	chia=a/(float)b;
	chiaDu=a%b;
		printf("%d",cong);
		printf(" %d",tru);
		printf("  %d",nhan);
		printf("   %.2f",chia);
		printf("    %d",chiaDu);
	}
return 0;
}


#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int sLe=0,sChan=0;
	int a;
	
	while(n>0){
		a=n%10;
		n/=10;
		
		if(a%2==0)
		sChan++;
		else
		sLe++;
	}
	printf("%d",sLe);
	printf(" %d",sChan);
return 0;
}


#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	
	if(n<2)
	printf("0");
	while(n>=2){
		int count=0;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				count++;}}
		if(count==0)
		printf("1");
		else
		printf("0");
		break;
		}	
return 0;
}


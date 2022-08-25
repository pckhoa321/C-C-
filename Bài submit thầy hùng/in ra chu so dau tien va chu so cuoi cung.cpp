#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
int firstnum;
int lastnum;

lastnum=n%10;

while(n!=0){
	firstnum=n%10;
	n/=10;
	}
	printf("%d %d",firstnum,lastnum);
	
return 0;
}


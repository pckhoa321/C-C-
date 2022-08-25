#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int nam,tuan,ngay;
	
	nam=n/365;
	tuan=(n-nam*365)/7;
	ngay=(n-nam*365)%7;
	
	printf("%d %d %d",nam,tuan,ngay);
return 0;
}


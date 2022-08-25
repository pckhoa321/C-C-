#include<stdio.h>

int main(){
	int i, n, s;
	s=0;
	scanf("%d", &n);
	do{
		if(n<0)
		 printf("Nhap so duong");
	}while(n<0);
	for(i =1; i <= n; i++){
		if(n % i == 0){
	    s+=i;
		 
	    }
    }
	 printf("%d ", s);
	
	return 0;
}

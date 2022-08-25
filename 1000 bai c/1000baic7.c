#include<stdio.h>

int main(){
	int i, n;
	float s;
	s=0;

	do{
	    scanf("%d", &n);
		if(n < 1)
		 printf("Loi");
	}while(n < 1);
	
	for(i = 1; i <= n; i++){
		s+=1.0*i/(i+1);
    }
    printf("%.2f", s);
	return 0;
}

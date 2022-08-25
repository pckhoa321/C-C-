#include<stdio.h>

void in(int *a, int *n){
	scanf("%d", n);
	int i;
	for(i = 0; i < *n; i++){
		scanf("%d", &a[i]);
	}
}
void out(int *a, int n ){
	int i, j;
	for(i =0; i < n-1 ;i++){
		for(j =n-1; j>i; j--){
			if(a[j] > a[j-1]){
				int tmp = a[j];
				a[j]= a[j-1];
				a[j-1] = tmp;
			}
		}
	}
}
void hienThi(int *a, int n){
	int i;
	for(i = 0; i<n; i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int n = 0;
	int a[100];
	in(a, &n);

	
	out(a, n);
	hienThi(a, n);
     
	return 0;
}

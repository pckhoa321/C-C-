#include<stdio.h>

void in(int *a, int *n){
	scanf("%d", n);
	int i;
	for(i = 0; i < (*n); i++){
		scanf("%d", &a[i]);
	}
}

void lonNhat(int *a, int n, int *max ){
	int i;
	(*max)= a[0];
	for( i = 1; i < n; i++){
		if((*max) < a[i]){
			(*max) = a[i];
		}
	}
}
void max1(int *a, int n, int *max2){
	int max;
	lonNhat(a, n, &max);
	(*max2) = max;
	int i;
	for( i = 1; i < n ;i++){
		if((*max2) < a[i] && a[i] != max){
			(*max2) = a[i];
		}
	} 
}
    if( max != (*max2)){
	   kq(*max2);
} 
void kq(int max2){
	if(max != max2)
}
int main(){
	int n =0;
	int a[100];
	int max2;
	in(a, &n);
	max1(a, n, &max2);
	return 0;
}


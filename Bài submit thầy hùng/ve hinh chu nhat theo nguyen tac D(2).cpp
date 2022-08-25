#include<stdio.h>

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	if(n>=m){
	for(int i=n;i>0;i--){
		for(int j=1;j<=m;j++){
			if(i<j){
			printf("%d",j-i+1);}
			else{
			if(i>=j)
			printf("%d",i-j+1);}}
			printf("\n");}}
	else{
		for(int i=1;i<=n;i++){
		for(int j=m;j>0;j--){
			if(i<j){
			printf("%d",j-i+1);}
			else{
			if(i>=j)
			printf("%d",i-j+1);}}
			printf("\n");}}	
return 0;
}


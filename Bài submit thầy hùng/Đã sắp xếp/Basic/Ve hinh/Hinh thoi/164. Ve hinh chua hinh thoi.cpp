//#include <???.h> //Author by Quan dep trai

void out(int x[][20],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n+n-1 ; i++){
		if(i<n){
	
			for(int j=0 ; j<n+n ; j++){
				if(j<n)
					if(i<n-j) printf("*");
						else printf("~");
				else if(i<=j-n) printf("*");
						else printf("~");		
			}
		}
		
		else
			for(int j=0 ; j<n+n ; j++){
				if(j<n)
					if(j<=i-n+1) printf("*");
						else printf("~");
				else if(j>=n+n+n-i-2) printf("*");
						else printf("~");
			}
			
		printf("\n");
	}
}


int main(){
	int x[20][20],n;
	scanf("%d",&n);
	out(x,n);
	
	return 0;
}

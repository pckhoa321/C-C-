//#include <???.h> //Author by Quan dep trai

bool isPrime(int n){
	if(n<2)
		return false;
	for(int i=2 ; i*i<=n ; i++){
		if(n%i==0)
			return false;
	}
	return true;
}

void in(int x[][10],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			scanf("%d",&x[i][j]);
		}
	}
}

void out(int x[][10],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}

void check(int x[][10],int n, int m=0){
	if(m == 0)
		m = n;
	int count =0,store[n*n];
	for(int i=2 ; i<10000 ; i++){
		if(count==99)
			break;
		if(isPrime(i)== true)
			store[count++] = i;
	}
	
	count=0;
	
	for(int i=0 ; i<n-i ; i++){
		for(int j=i ; j<m-i ; j++){
			x[i][j] = store[count++];
		}
				
		for(int j=i+1 ; j<m-i ; j++){
			x[j][n-i-1] = store[count++];
		}
		
		for(int j=n-2-i ; j>=i ; j--){
			x[n-1-i][j] = store[count++];
		}	
			
		for(int j=n-2-i ; j>i ; j--){
			x[j][i] = store[count++];
		}	
	}
	out(x,n);
	
}

int main(){
	int x[10][10],n;
	scanf("%d",&n);
	check(x,n);
	
	return 0;
}

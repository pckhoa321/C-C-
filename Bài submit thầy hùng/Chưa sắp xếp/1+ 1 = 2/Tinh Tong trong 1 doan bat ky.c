#include <stdio.h>

int main(){ long long S = 0;
    int a,b;
    scanf("%d %d",&a,&b);
    
    
    for(int i = a; i <= b; i++)
    {
    	S += i; 
    }
    printf("%lld",S);
return 0;
}
	
//Viet chuong tr�nh C cho ph�p nhap v�o hai so a, b. Thuc hi?n t�nh t?ng c�c s? t? nhi�n n?m trong kho?ng a, b v� in ra m�n h�nh. (Luu � ngu?i d�ng c� th? nh?p a l?n hon b)

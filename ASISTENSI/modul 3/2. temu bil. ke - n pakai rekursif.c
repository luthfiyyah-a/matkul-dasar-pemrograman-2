#include <stdio.h>

int main(){
	
	int a; 
	scanf("%d", &a);
	printf("%d", temubaris(a));
	return 0;
}

int temubaris(int n){
	
	if(n==1) return 1;
	else return (temubaris(n-1) + n*n);
}

#include <stdio.h>

int S(int n, int m){
	
	if(n==0 && m==0){
		return 1;
	}
	else if((n>0 && m==0) || (m>0 && n==0)){
		return 0;
	}
	
	else if(n > 0 && m > 0){
		return m*S(n-1, m) + S(n-1, m-1);
	}
}

int main(){
	
	int t; //jumlah testcase
	scanf("%d", &t);
	
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		
		printf("%d\n", S(n, m)&1);
	}
	return 0;
}

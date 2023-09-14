#include <cstdio>

int main(){
	
	int t; //jumlah testcase
	double n;
	
	scanf("%d", &t);
	while(t--){
		scanf("%lf", &n);
		printf("%.5lf\n", (n*(n+1.0))/ (2.0*(n*n+n+1.0)));
	}
}


//versi berbeda sedikit
/*
#include <cstdio>

int main(){
	
	int t; //jumlah testcase
	int n;
	
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		printf("%.5lf\n", (n*(n+1))/ (double) (2*(n*n+n+1)));
	}
}

*/

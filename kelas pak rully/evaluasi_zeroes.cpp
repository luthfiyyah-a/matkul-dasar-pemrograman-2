#include <cstdio>
#include <cmath>
typedef unsigned long long ULL;

ULL euclid(ULL a, ULL b){
	if(b==0) return a;
	else return euclid(b, a%b);
}

ULL kpk(ULL a, ULL b){
	return (a*b) / euclid(a,b);
}

int main(){
	ULL a, b;
	
	scanf("%llu %llu", &a, &b);
	
	//mencari kpk seluruh angka
	ULL x=1;
	for(ULL i=a; i<=b; i++){
		x = kpk(x, i);
	}
	
	//mencari berapa 0 dibelakang x
	ULL count = 0;
	while(x){
		if(x%10 == 0){
			count++;
			x = x / 10;
		}
		else break;
	}
	
	printf("%llu", count);
}

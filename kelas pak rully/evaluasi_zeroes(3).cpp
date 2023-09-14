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
	
	
	if(a==1 && b>=125 && b<= 200) {
		printf("3");
		return 0;
	}
	else if(a==1 && b>=25 && b<=200){
		printf("2");
		return 0;
	}
	else if(a==1){
		int count = 0;
		for(ULL i=5; i<=b; i=i*5){
			count++;
		}
		printf("%d", count);
		return 0;
	}
	
	if(abs(b-a) < 100){
	
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
	
	//kasus  b-a > 10^6
	else{
		//mencari angka yang ada faktor 5 terbesar.
		int batas_atas=0;
		int batas_bawah=0;
		for(ULL i=1; i<=b; i=i*5){
			if(i<=a) batas_bawah++;
			if(i<=b) batas_atas++;
			else break;
		}
		if(batas_atas < batas_bawah) printf("%d", batas_atas-1);
		else{
			int count = 6;
			for(ULL i=1000000; i<=b; i=i*10){
				count++;
			}
			
			printf("%d", count-1);
		}
	}
}

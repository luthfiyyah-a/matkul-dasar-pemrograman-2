#include <cstdio>
#include <cmath>
typedef unsigned long long ULL;

int main(){
	ULL a, b;
	
	scanf("%llu %llu", &a, &b);
	
	
	//mencari angka yang ada faktor 5 terbesar.
	int batas_bawah=0;
	for(ULL i=1; i<=a; i=i*5){
		if(i<=a) batas_bawah++;
	}
	int batas_atas=0;
	for(ULL i=1; i<=b; i=i*5){
		if(i<=b) batas_atas++;
	}
	
	int faktor5=0;
	if(batas_bawah < batas_atas) faktor5 = batas_atas-1;
	else faktor5 = batas_atas-2;
	
	//mencari faktor 2
	batas_bawah=0;
	for(ULL i=1; i<=a; i=i*5){
		if(i<=a) batas_bawah++;
	}
	batas_atas=0;
	for(ULL i=1; i<=b; i=i*5){
		if(i<=b) batas_atas++;
	}
	
	int faktor2=0;
	if(batas_bawah < batas_atas) faktor2 = batas_atas-1;
	else faktor2 = batas_atas-2;
	
	if(faktor2<faktor5) printf("%d", faktor2);
	else printf("%d", faktor5);
	
}

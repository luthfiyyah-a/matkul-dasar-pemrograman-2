//#include <cstdio>
//#include <iostream>
//typedef unsigned long long ULL;
//using namespace std;
//ULL MULT;
//
//ULL RGC (int d, int k, ULL sum) {
//	if (k == 0 || k == 1) return k;
//	if (d == 0) return sum;
//	
//	int temp = (k- MULT/2 ) / MULT;
//	if(temp%2 == 0)
//		sum = sum + MULT / 2;
//	else sum = sum+0;
//	
//	MULT >>= 1;
//	return RGC(d-1, k, sum);
//}
//
//int main() {
//	int t, d, k;
//	scanf("%d", &t);
//	
//	while (t--) {
//		scanf("%d %d", &d, &k);
//		MULT = 1 << d;
//		
//		cout << RGC(d, k, 0) << endl;
//	}
//	return 0;
//}

#include <stdio.h>
typedef unsigned long long ULL;

ULL rekur(int jumlah, int k, ULL sum){
	if(k==0) return sum;
	if(k==1) return sum + 1;
	
	if(k >= jumlah/2){
		sum = sum + jumlah/2;
		k = jumlah - k - 1 ;
	}
	jumlah = jumlah / 2;
	
	return rekur(jumlah, k, sum);
}

int main(){
	
	int t;
	scanf("%d", &t);
	
	while(t--){
		int n, k;
		scanf("%d %d", &n, &k);
		
		int jumlah = 1<<n;
		printf("%d\n", rekur(jumlah, k, 0));
	}
	
}

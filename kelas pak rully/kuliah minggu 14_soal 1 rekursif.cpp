#include <cstdio>
#include <algorithm>
using namespace std;

//link soal : https://www.spoj.com/problems/TBP/

bool f(int n){
	if(n==42) return true;
	if(n<42) return false;
	if(n%2==0 && n(n/2) return true;
	
	int dig1=n%10; int dig2=(n%100)/10;
	
	if((n%3==0 || n%4==0) && dig1!=0 && dig2!=0 && f(n- dig1*dig2)) return true;
	if((n%5==0) && f(n-42)) return true;
}

int main(){
	
	int t; 
	scanf("%d", &t);
	
	while(t--){
		int n;
		scanf("%d", &n);
		if(f(n)) puts("1");
		else puts("0");
	}
	
	return 0;
}

#include <stdio.h>

int main(){
	
	int a;
	int hasil;
	
	scanf("%d", &a);
	hasil = (a/100) & (a/10)%10 | (a%10);
	printf("%d", hasil);
	
	return 0;
}

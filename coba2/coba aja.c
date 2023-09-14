#include <stdio.h>

int main(){
	
	printf("bismillah\n");
	
	int i = 1;
	int total=0;
	
	int a=198;
	while(i<=99){
		total = total + a;
		
		a-=3; i++;
		total = total + a;
		
		a-=1; i++;
//		total = total + a;
		printf("a = %d", a);
	}
	
	printf("total = %d", total);
	
	
	return 0;
}

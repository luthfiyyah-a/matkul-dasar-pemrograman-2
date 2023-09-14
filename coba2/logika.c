#include <stdio.h>

int main(){
	
	printf("bismillah\n");
	
	int i = 1;
	int total=0;
	
	int a=198;
	while(i<=99){
		
		total = total + a;
//		printf("bismillah a = %d\n", a);
		
		if(a == 2) break;
		a-=3; i++;
		total = total + a;
//		printf("alhamdulillah a = %d\n", a);
		
		if(a == 2) break;
		a-=1; i++;
	}
	
	printf("total = %d", total);
	
	return 0;
}

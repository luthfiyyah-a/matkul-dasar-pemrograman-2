#include <stdio.h>
#include <math.h>


int main(){
	
	int a;
	scanf("%d", &a);
	
	// 1 digit
	if(a >= 0 && a < 10){
		printf("Merupakan Bilangan Amstrong");	
	}
	
	// 2 digit
	if(a >= 10 && a < 100){
		if(a == ( pow(a/10, 2) + pow(a%10, 2) )) {
			printf("Merupakan Bilangan Amstrong");
		}
		else{
			printf("Bukan Merupakan Bilangan Amstrong");
		}
	}
	
	// 3 digit
	if(a >= 100 && a < 1000){
		if(a == ( pow(a/100, 3) + pow((a/10)%10, 3) + pow((a%10), 3) )) {
			printf("Merupakan Bilangan Amstrong");
		}
		else{
			printf("Bukan Merupakan Bilangan Amstrong");
		}
	}
	return 0;	
}

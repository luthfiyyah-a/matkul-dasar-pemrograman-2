#include <stdio.h>

//int faktorial(int a){
//	
//	if(a==1) return 1;
//	
// 	return a*faktorial(a-1);
//}

int main(){
	
	int a;
	
	scanf("%d", &a);
	
	printf("%d", faktorial(a));
	return 0; 
}

int faktorial(int a){
	
	if(a==1) return 1;
	
 	return (a*(faktorial(a-1)));
}

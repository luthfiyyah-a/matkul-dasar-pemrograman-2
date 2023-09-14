#include <stdio.h>


void reserve(int* arr, int i){
	while(i--){
		printf("%d ", *(arr+i));
	}
	
}

int main(){
	int arr[5];
	int n, i; 
	
	scanf("%d", &n);
	for(i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	reserve(&arr, n);
	return 0;
}

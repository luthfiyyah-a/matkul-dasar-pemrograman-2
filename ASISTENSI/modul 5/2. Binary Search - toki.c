#include <stdio.h>
#define ARR 100000

//pakai linear search TLE

typedef struct arr_t{
	int data;
	int index;
}arr_t;

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int binarySearch(int n, int key, arr_t a[ARR]){
	// n = jumlah data array
	// key = data yang dicari
	// low, mid, high -> indeks pada array
	int low = 0; 
	int high = n-1;
	int mid;
	int found = 0; //apakah data ditemukan

	while(low <= high){
		mid = (low+high)/2;
	
		if(key < a[mid].data){
			high = mid-1;
		}
		else if(key > a[mid].data){
			low = mid+1;
		}
		else if(key == a[mid].data){
//			printf("data ditemukan pada indeks ke-%d\n", mid);
			found = 1;
			break;
		}
	}
	
	//jika data tidak ditemukan
	if(found == 0) {
//		printf("data tidak ditemukan");
		mid = -1;
	}
	else{
		mid = a[mid].index;
	}

	return mid;
}		

int main(){
	arr_t arr[ARR];
	
	//menginput data ke array
	int N;
	scanf("%d", &N);
	
	int i;
	
	for(i=0; i<N; i++){
		scanf("%d", &arr[i].data);
		arr[i].index = i;
	}
	
	//sort
	int j, temp;
	for(i=0; i<N-1; i++){
		for(j=0; j<N-i-1; j++){
			if(arr[j].data > arr[j+1].data){
				swap(&arr[j].data, &arr[j+1].data);
				swap(&arr[j].index, &arr[j+1].index);
			}
		}
	}
	
	//search
	int M;
	int key;
	scanf("%d", &M);
	for(i=0; i<M; i++){
		scanf("%d", &key);
		printf("%d\n", binarySearch(N, key, arr));
	}
}


#include <stdio.h>

int binarySearch(int n, int key, int a[]){
	// n = jumlah data array
	// key = data yang dicari
	// low, mid, high -> indeks pada array
	int low = 0; 
	int high = n-1;
	int mid;
	int found = 0; //apakah data ditemukan
	
	while(low <= high){
		mid = (low+high)/2;
	
		if(key < a[mid]){
			high = mid-1;
		}
		else if(key > a[mid]){
			low = mid+1;
		}
		else if(key == a[mid]){
			while(key == a[mid-1] && mid>0){
				mid--;
			}
			found = 1;
			break;
		}
	}
	
	//jika data tidak ditemukan
	if(found == 0) {
		mid = -1;
	}

	return mid;
}		

int main(){
	
	int N;
	
	//input data array
	scanf("%d", &N);
	
	int i;
	int arr[100000];
	for(i=0; i<N; i++){
		scanf("%d", &arr[i]);
	}
	
	//cari data
	int M;
	scanf("%d", &M);
	
	int key;
	for(i=0; i<M; i++){
		scanf("%d", &key);
		printf("%d\n", binarySearch(N, key, arr));
	}
	
	return 0;
}

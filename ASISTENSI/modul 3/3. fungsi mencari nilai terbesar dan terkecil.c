#include <stdio.h>

int main(){
	
	int N, A[100];
	int i;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &A[i]);
	}
	
	printf("max: %d\n", cari_terbesar(A, 1, A[0], N));
	printf("min: %d", cari_terkecil(A, 1, A[0], N));
	
	/* versi loop*/
//	int terkecil, terbesar;
//	terbesar = terkecil = A[0];
//	for(i=1; i<N; i++){
//		if(terbesar < A[i]) terbesar = A[i];
//	}
//	for(i=1; i<N; i++){
//		if(terkecil > A[i]) terkecil = A[i];
//	}
//	printf("max: %d\nmin: %d", terbesar, terkecil);
	
	return 0;
}

int cari_terbesar(int a[], int i, int terbesar, int N){
	
	if(terbesar < a[i]) terbesar = a[i];

	if(i==N-1) return terbesar;
	
	terbesar = cari_terbesar(a, i+1, terbesar, N);
	
	return terbesar;
}

int cari_terkecil(int a[], int i, int terkecil, int N){
	
	if(terkecil > a[i]) terkecil = a[i];

	if(i==N-1) return terkecil;
	
	terkecil = cari_terkecil(a, i+1, terkecil, N);
	
	return terkecil;
}

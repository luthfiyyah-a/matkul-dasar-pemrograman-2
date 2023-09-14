#include <stdio.h>
#define MAX_DATA 100

struct data_t{
	char nama[100];
	int mat;
	int ipa;
	int indo;
	int ing;
};

/* pertanyaan : 
	- apakah struct itu harus dideklarasiin di luar fungsi main?
*/

int main(){
	
	int n; //jumlah input
	int m; //jumlah anak yang dicari
	int i, j;
	int flag;
	char temp[100][MAX_DATA];
	struct data_t mhs[MAX_DATA];
	
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s %d %d %d %d", mhs[i].nama, &mhs[i].mat, &mhs[i].ipa, &mhs[i].indo, &mhs[i].ing);
	}
	
	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%s", temp[i]);
	}
	
	//cari dan tampilkan output
	for(i=0; i<m; i++){
		
		flag = 0;
		for(j=0; j<n; j++)
		{
			if(strcmp(temp[i], mhs[j].nama)==0)
			{
				flag = 1;
				printf("Nilai %s\n", mhs[j].nama);
				printf("Matematika : %d\n", mhs[j].mat);
				printf("IPA : %d\n", mhs[j].ipa);
				printf("Bahasa Indonesia : %d\n", mhs[j].indo);
				printf("Bahasa Inggris : %d\n", mhs[j].ing);
			}
		}
		if(flag==0){
			printf("Nilai %s tidak ditemukan\n", temp[i]);
		}
	}
}

#include <stdio.h>
#include <string.h>

int main(){
	
	char tes[1000];
	char temp[1000];
	int i;
	
	scanf("%s", tes);

	strcpy(temp, tes);
	int panjang = strlen(tes);
	for(i=0; i<panjang; i++){
		tes[i] = '0';
	}
	
	strcat(tes, temp);
	printf("%s", tes);
	
	return 0;
}

#include <stdio.h>

int main(){
	
	int suhu;
	char satuan_awal, satuan_akhir;
	double output;
	
	scanf("%d %c %c", &suhu, &satuan_awal, &satuan_akhir);
	
	if(satuan_awal == 'K' && satuan_akhir == 'F'){
		output = (9.0/5) * (suhu-273) + 32;
	}
	
	printf("%.2lf %c", output, satuan_akhir);
	return 0;
}

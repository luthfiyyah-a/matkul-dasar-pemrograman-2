#include <stdio.h>

int main(){
	
	int x; //angka input
	int a;
	int belasan = 0; // mendeteksi apabila bilangan tersebut terdapat belasan
	
	scanf("%d", &x);
	
		
	// mencetak angka ratusan, puluhan, belasan(bila ada) dari Bilangan 3 digit
	if(x > 100){
		a = x/100;
		if(a == 1) {
			printf("Seratus");
		}
		else{
			if(a == 2) printf("Dua");
			else if(a == 3) printf("Tiga");
			else if(a == 4) printf("Empat");
			else if(a == 5) printf("Lima");
			else if(a == 6) printf("Enam");
			else if(a == 7) printf("Tujuh");
			else if(a == 8) printf("Delapan");
			else if(a == 9) printf("Sembilan");
			printf(" ratus");
		}
		
		// mencari dan mencetak angka puluhan/belasan pada bilangan 3 digit
		a = (x/10)%10;
		if(a == 1){
			a = x%10;
			printf(" ");
			if(a == 0) printf("sepuluh");
			else if(a == 1) printf("sebelas");
			else{
				if(a == 2) printf("dua");
				else if(a == 3) printf("tiga");
				else if(a == 4) printf("empat");
				else if(a == 5) printf("lima");
				else if(a == 6) printf("enam");
				else if(a == 7) printf("tujuh");
				else if(a == 8) printf("delapan");
				else if(a == 9) printf("sembilan");
				printf(" belas");
			}
			belasan = 1;
		} 
		else{
			printf(" ");
			if(a == 2) printf("dua");
			else if(a == 3) printf("tiga");
			else if(a == 4) printf("empat");
			else if(a == 5) printf("lima");
			else if(a == 6) printf("enam");
			else if(a == 7) printf("tujuh");
			else if(a == 8) printf("delapan");
			else if(a == 9) printf("sembilan");
			printf(" puluh");
		}
		
	}
	a = 0;
	
	// mencari dan mencetak angka puluhan pada bilangan 2 digit
	if(x >= 20 && x < 100){
		
		a = (x/10)%10;
		if(a == 2) printf("Dua");
		else if(a == 3) printf("Tiga");
		else if(a == 4) printf("Empat");
		else if(a == 5) printf("Lima");
		else if(a == 6) printf("Enam");
		else if(a == 7) printf("Tujuh");
		else if(a == 8) printf("Delapan");
		else if(a == 9) printf("Sembilan");
		printf(" puluh");
	}
	
	// mencetak nilai satuan pada bilangan 2 dan 3 digit (yang tidak menganng belasan)
	if(!belasan && x>20){
		a = x%10;
		printf(" ");
		if(a == 1) printf("satu");
		else if(a == 2) printf("dua");
		else if(a == 3) printf("tiga");
		else if(a == 4) printf("empat");
		else if(a == 5) printf("lima");
		else if(a == 6) printf("enam");
		else if(a == 7) printf("tujuh");
		else if(a == 8) printf("delapan");
		else if(a == 9) printf("sembilan");
	}
	
	// mencetak bilangan belasan dan 10
	if(x>=10 && x<20){
		a = x%10;
		if(a == 0) printf("Sepuluh");
		else if(a == 1) printf("Sebelas");
		else{
			if(a == 2) printf("Dua");
			else if(a == 3) printf("Tiga");
			else if(a == 4) printf("Empat");
			else if(a == 5) printf("Lima");
			else if(a == 6) printf("Enam");
			else if(a == 7) printf("Tujuh");
			else if(a == 8) printf("Delapan");
			else if(a == 9) printf("Sembilan");
			printf(" belas");
		}
	}

	//mencetak bilangan 1 digit
	if(x>=0 && x < 9){
		a = x;
		if(a == 0) printf("Nol");
		else if(x == 1) printf("Satu");
		else if(a == 2) printf("Dua");
		else if(a == 3) printf("Tiga");
		else if(a == 4) printf("Empat");
		else if(a == 5) printf("Lima");
		else if(a == 6) printf("Enam");
		else if(a == 7) printf("Tujuh");
		else if(a == 8) printf("Delapan");
		else if(a == 9) printf("Sembilan");
	}
	
	return 0;
}

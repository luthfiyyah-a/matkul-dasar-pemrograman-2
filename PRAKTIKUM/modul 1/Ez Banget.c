#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    double N; // input suhu
    char X; // satuan awal
    char Y; // satuan akhir
    double output; // output suhu
    double a, b, perbandingan;
    
    scanf("%lf %c %c", &N, &X, &Y);
    
    if(X == 'K'){
        //jika suhu awal dalam kelvin, maka diubah dulu ke bentuk Celcius, dengan mengurangkannya dengan 273. setelah itu, baru dikonversi ke bentuk lain.
		N = N - 273;
        a = 5; //mengikuti celcius
    }
    else if(X == 'C') a = 5;
    else if(X == 'R') a = 4;
    else if(X == 'F') {
		N = N -32;
		a = 9;
	}
    else a = 0;
        

    if(Y == 'K'){
        //jika suhu ingin diubah ke kelvin, maka diubah dulu ke bentuk Celcius. lalu dikonversi ke kelvin.
        b = 5; // mengikuti celcius
    }
    else if(Y == 'C') b = 5;
    else if(Y == 'R') b = 4;
    else if(Y == 'F') b = 9;
    else b = 0;
    
    if(a == 0 || b == 0){
        printf("Jenis temperatur yang dimasukkan tidak ada");
        return 0;
    }
    
    perbandingan = b/a;
    output = N * perbandingan;
    
    if(Y == 'K') output += 273;
    if(Y == 'F') output += 32;
    
    printf("%.2lf %c", output, Y );
    return 0;
}

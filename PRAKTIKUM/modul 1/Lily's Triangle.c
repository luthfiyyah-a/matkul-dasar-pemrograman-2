#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
   /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    //syarat segitiga : a+b>c, dimana a,b,c adalah sisi2nya
    if(!(a+b > c)){
        printf("Tidak dapat menjadi segitiga.");
    }
    else{
        //jika siku-siku, maka berlaku hukum phytagoras
        if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)){
            printf("Dapat menjadi segitiga, yaitu segitiga siku-siku.");
        }
        else if(a==b && b==c){
            printf("Dapat menjadi segitiga, yaitu segitiga sama sisi.");
        }
        else if( a==b || b==c || c==a){
            printf("Dapat menjadi segitiga, yaitu segitiga sama kaki.");
        }
        else{
            printf("Dapat menjadi segitiga, yaitu segitiga sembarang.");
        } 
    }
    return 0;
}

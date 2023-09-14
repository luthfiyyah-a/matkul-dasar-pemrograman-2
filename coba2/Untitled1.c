#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000

typedef struct data_t{
    char id[6];
    int stok;
} data;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    data barang;
    int t, sum;
    char temp_id[6];
    int temp_stok;
    int flag_ketemu;
    int i;
    
    scanf("%d %d", &t, &sum);
    for(i=0; i<sum; i++){
        scanf("%s %d", barang[i].id, &barang[i].stok);
    }
    
    while(t--){
        scanf("%s %d", temp_id, &temp_stok);
        
        flag_ketemu = 0;
        for(i=0; i<sum; i++){
            
            if(strcmp(barang[i].id, temp_id)==0){
                
                flag_ketemu = 1;
                
                if(barang[i].stok <= 0){
                    printf("Stok habis\n");
                }
                else if(barang[i].stok < temp_stok){
                    printf("Jumlah stok kurang\n");
                }
                else{
                    barang[i].stok -= temp_stok;
                    printf("Data telah diperbarui\n");
                }
            }
        }
        
        if(flag_ketemu == 0){
            printf("Barang tidak ditemukan\n");
        }
    }
    
    return 0;
}

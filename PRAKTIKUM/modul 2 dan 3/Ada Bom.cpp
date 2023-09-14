#include <stdio.h>

int main() {
    
    char matriks[50][50];
    int count[50];
    int t; //banyaknya testcase
    int m, n; //panjang dan lebar matriks
    int a;
    int i, j;
    int p, q; 
    char enter;
    
    scanf("%d", &t);
    for(a=1; a<=t; a++){
        
        scanf("%d %d", &m, &n);
        
        /*input data yang ingin dimasukkan ke dalam matriks*/
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                scanf("%c", &matriks[i][j]);
                printf("%c", matriks[i][j]);
            }
            scanf("%c", &enter);
        }
        
        
        // for(i=0; i<m; i++){
        //     for(j=0; j<n; j++){
        //         printf("%c", matriks[i][j]);
        //     }
        //     printf("\n");
        // }
        
        /* menghitung potensi orang terkena bom per testcase */
        count[a]=0; //variabel yang menghitung potensi org terkena bom per testcase
        //mencari bom pada matriks
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(matriks[i][j]=='X'){
                    //menghitung potensi orang yang terkena bom akibat 1 bom (X)
                    //ingat, 1 bom (X) dapat berdampak ke yang indeks arraynya selisih +- 1
                    for(p=i-1; p<=i+1; p++){
                        for(q=j-1; q<=j+1; q++){
                            //jika index masih merupakan matriks dan isi index adalah manusia (O), maka masuk hitungan
                            if((p>=0 && q>=0) && (p<m && q<n) && matriks[p][q]=='O'){
                                count[a]++;
                            }
                        }
                    }
                }
            }
        }
    }

    
    /*menampilkan output*/
    for(a=1; a<=t; a++){
        printf("Case #%d: %d\n", a, count[a]);
    }
    
    return 0;
}

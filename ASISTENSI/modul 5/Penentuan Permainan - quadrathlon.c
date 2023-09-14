#include <stdio.h>

int main() {
    
    int long n;
    scanf("%ld", &n);
    
    unsigned long long a;
    unsigned long long max = 0;
    
    while(n--){
        scanf("%llu", &a);
        if(max < a){
            max = a;
        }
    }
    
    printf("%llu", max);
    return 0;
}

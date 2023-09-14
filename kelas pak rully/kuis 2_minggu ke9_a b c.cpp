#include <stdio.h>

int main(){
	
	int n;
	int a,b,c;
	int x;
	int i;
	
	scanf("%d", &n);
	
	int y=0;
	for(a=1; a<=n; a++){
		for(b=a; b<=n/a; b++){
			for(c=b; c<=(n/a)/b; c++){
				x = a*b*c;
				if(x<=n){
					
					if(a==b && b==c){
						y = y + 1;
					}
					else if( a==b || b==c || a==c){
						y = y + 3;
					}
					else{
						y = y + 6;
					}
				}
				else break;
			}
		}
	}
	
	printf("%d\n", y);

	return 0;
}


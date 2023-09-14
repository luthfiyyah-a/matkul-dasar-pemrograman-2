#include <stdio.h>
#include <math.h>

int main(){
	
	int t;
	int x, y, n;
	int flag = 0;
	
	scanf("%d", &t);
	
	while(t--){
	
		scanf("%d", &n);
		
		x = n;
		
		for(y=1; y<=n-1; y++){
			x = x + y + x*y;
			
			if(x>pow(10, 9)){
				flag = 1;
				break;
			}
		}
		
		if(flag==0)
			printf("%d\n", x);
		else{
			x = (pow(10, 9)+7) + n-1 + (n-1) * (pow(10, 9)+7);
			printf("%d\n", x);
		}
	}
	return 0;
}


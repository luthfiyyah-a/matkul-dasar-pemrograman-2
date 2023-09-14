#include <stdio.h>
#include <math.h>

int main(){
	
	int I1, I2, I3, I4;
	scanf("%d %d %d %d", &I1, &I2, &I3, &I4);
	
	int x = pow(2, 3) * I1 + pow(2, 2) * I2 + pow(2, 1) *I3 + pow(2, 0) * I4;
	
	if(x == 0){ // 0
		printf("1 1 1 1 1 1 0\n");
	}
	else if(x == 1){ // 1
		printf("0 1 1 0 0 0 0\n");
	}
	else if(x == 2){ // 2
		printf("1 1 0 1 1 0 1\n");
	}
	else if(x == 3){ // 3
		printf("1 1 1 1 0 0 1\n");
	}
	else if(x == 4){ // 4
		printf("0 1 1 0 0 1 1\n");
	}
	else if(x == 5){ // 5
		printf("1 0 1 1 0 1 1\n");
	}
	else if(x == 6){ // 6
		printf("1 0 1 1 1 1 1\n");
	}
	else if(x == 7){ // 7
		printf("1 1 1 0 0 0 0\n");
	}
	else if(x == 8){ // 8
		printf("1 1 1 1 1 1 1\n");
	}
	else if(x == 9){ // 9
		printf("1 1 1 1 0 1 1\n");
	}
	else{
		printf("0 0 0 0 0 0 0\n"); // selain 0 - 9
	}
	
/* ini nyobain test case-nya semua*/	
//	if(I1==0 && I2==0 && I3==0 && I4==0){ // 0
//		printf("1 1 1 1 1 1 0\n");
//	}
//	else if(I1==0 && I2==0 && I3==0 && I4==1){ // 1
//		printf("0 1 1 0 0 0 0\n");
//	}
//	else if(I1==0 && I2==0 && I3==1 && I4==0){ // 2
//		printf("1 1 0 1 1 0 1\n");
//	}
//	else if(I1==0 && I2==0 && I3==1 && I4==1){ // 3
//		printf("1 1 1 1 0 0 1\n");
//	}
//	else if(I1==0 && I2==1 && I3==0 && I4==0){ // 4
//		printf("0 1 1 0 0 1 1\n");
//	}
//	else if(I1==0 && I2==1 && I3==0 && I4==1){ // 5
//		printf("1 0 1 1 0 1 1\n");
//	}
//	else if(I1==0 && I2==1 && I3==1 && I4==0){ // 6
//		printf("1 0 1 1 1 1 1\n");
//	}
//	else if(I1==0 && I2==1 && I3==1 && I4==1){ // 7
//		printf("1 1 1 0 0 0 0\n");
//	}
//	else if(I1==1 && I2==0 && I3==0 && I4==0){ // 8
//		printf("1 1 1 1 1 1 1\n");
//	}
//	else if(I1==1 && I2==0 && I3==0 && I4==1){ // 9
//		printf("1 1 1 1 0 1 1\n");
//	}
//	else{
//		printf("0 0 0 0 0 0 0\n"); // selain 0 - 9
//	}
	
	
	return 0; 
}

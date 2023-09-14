#include <stdio.h>

int main(){
	
	int x, y, z; //posisi 1, 2, 3
	int c1, c2, c3; //count
	int t; //jumlah swape
	int a, b, g;
	int temp;
	int i;
	
	scanf("%d", &t);
	
	x=1; y=2; z=3;
	c1 = c2 = c3 =0;
	
	for(i=0; i<t; i++){
		
		scanf("%d %d %d", &a, &b, &g);
		
		if((a==1 && b ==3 ) || (a==3) && (b==1)){
			temp = x;
			x = z;
			z = temp;
		}
		else if((a==2 &&  b==3) || (a==3 && b==2)){
			temp = y;
			y = z;
			z = temp;
		}
		else if((a==1 && b==2) || (a==2 && b==1)){
			temp = x;
			x = y;
			y = temp;
		}
		
		if( g == 1){
			if(x==1) c1++;
			else if(x==2) c2++;
			else if(x==3) c3++;
		}
		else if(g==2){
			if(y==1) c1++;
			else if(y==2) c2++;
			else if(y==3) c3++;

		}
		else if(g==3){
			if(z==1) c1++;
			else if(z==2) c2++;
			else if(z==3) c3++;
		}
	}
	
	if(c1>=c2 && c1>=c3) printf("%d", c1);
	else if(c2>=c1 && c2>=c3) printf("%d", c2);
	else if(c3>=c2 && c3>=c1) printf("%d", c3);
	
	return 0;
}

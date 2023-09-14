#include <stdio.h>
#include <math.h>

int main(){
	
	double p, q;
	
	scanf("%lf %lf", &p, &q);
	
	printf("%.4lf", 2.0 * (q/p) * sqrt(p*p - (1/4)*q*q));
	
	return 0;
}

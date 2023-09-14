#include <stdio.h>
#include <math.h>

int main() {

	int t;
	int hasil;
	double hasil_double;
	long long int a, b;
	char tanda;

	scanf("%d", &t);
	while(t--){
		scanf("%lld%cll%d", &a, &tanda, &b);

		if(tanda=='/') {
			hasil_double = (11.0*a) / (13.0*b) + 17.0;
			hasil = hasil_double * 1000000;
			hasil_double = hasil / 1000000.0;
			printf("%.6lf\n", hasil_double);
			}
		else{
			if(tanda=='+') hasil = 11*a + 13*b + 17;
			else if(tanda=='-') hasil = 11*a - 13*b + 17;
			else if(tanda=='*')	hasil = 11*a * 13*b + 17;

			printf("%lld\n", (int) hasil);
		}
	}
	return 0;
}

//#include <cstdio>
//
//int main() {
//
//	int t;
//	double hasil;
//	double a, b;
//	char tanda;
//
//	scanf("%d", &t);
//	while(t--){
//		scanf("%lf%c%lf", &a, &tanda, &b);
//
//		if(tanda=='+') hasil = 11*a + 13*b + 17;
//		else if(tanda=='-') hasil = 11*a - 13*b + 17;
//		else if(tanda=='*')	hasil = 11*a * 13*b + 17;
//		else if(tanda=='/') hasil = (11*a) / (13*b) + 17;
//
//		if((hasil - (int) hasil) == 0) printf("%d\n", (int) hasil);
//		else printf("%.6lf\n", hasil);
//	}
//	return 0;
//}

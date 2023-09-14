#include <cstdio>
using namespace std;

int main(){
	int tcase;
	char c;
	long long int a, b;
	scanf("%d", &tcase);
	while(tcase--){
		scanf("%lld %c %lld", &a, &c, &b);
		switch(c)
		{
		case '+':
			printf("%lld\n", (a*11) + (b*13) + 17);
			break;
		case '-':
			printf("%lld\n", ((a*11)-(b*13)) + 17);
			break;
		case '*':
			printf("%lld\n", ((a*11)*(b*13)) + 17);
			break;
		case'/':
			printf("%.6lf\n", ((double)(a*11)/(b*13) + 17));
			break;
		}
	}

	return 0;
}

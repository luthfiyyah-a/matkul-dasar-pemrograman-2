#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	// your code here
	int n, input;
	int hasil, negatif;
	scanf("%d", &n);
	hasil = 1;
	negatif = -10;
	for(int i=0; i<n; i++){
		scanf("%d", &input)
			if(input==0) continue;
			hasil *= input;
			if(input<0)
				negatif = max(negatif, input);
	}
	
	if(hasil<0) hasil/=negatif;
	printf("%d\n", hasil);
	return 0;
}

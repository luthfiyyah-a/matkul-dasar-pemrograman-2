   #include <iostream>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int N;
		scanf("%d", &N);
		long long p = 5;
		long long sum = 0;
		while (N){
			sum += (N&1)?p:0;
			N >>= 1;
			p *= 5;
		}
		cout << sum << endl;
	}
	return 0;
}

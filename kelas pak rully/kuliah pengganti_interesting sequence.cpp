#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long LL;

int main(){
	LL n, x;
	cin >> n;
	while (n--){
		cin >> x;
		LL tmp = __builtin_popcountll(x-1);
		cout << tmp % 3 <<endl;
	}
	return 0;
}

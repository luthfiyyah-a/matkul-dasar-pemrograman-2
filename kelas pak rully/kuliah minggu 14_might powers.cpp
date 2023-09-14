#include <cstdio>
#include <iostream>
#include <algorithm>

typedef unsigned long long ULL;
using namespace std;
ULL set[22];
bool SubsetSum(int n, ULL sum){
	if(sum == 0LL) return true;
	if(n == 0 && sum != 0LL) return false;
	if(set[n-1] > sum != 0LL) return false;
	return SubsetSum(n-1, sum) || SubsetSum(n-1, sum-set[n-1]);
}


int main(){
	ULL sum;
	int n;
	cin >> n >> sum;
	for(int i=0; i<n; i++)
		cin >> set[i];
	sort(set, set+n);
	if(SubsetSum(n, sum) == true) puts("YES");
	else puts("NO");
	return 0;
}


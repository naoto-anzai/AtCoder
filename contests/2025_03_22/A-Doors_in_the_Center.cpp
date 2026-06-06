#include<iostream>
#include<vector>

using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main (void){
	int N;
	cin >> N;

	vector<char> ans(N);
	int hN = N - N/2;

	for(int i=1;i < hN;i++){
		ans[i-1] = '-';
		ans[N-i] = '-';
	}
	ans[hN-1] = '=';
	ans[N-hN] = '=';

	rep(i,N){
		cout << ans[i];
	} 
	cout << endl;
}
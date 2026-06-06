#include<iostream>
#include<cmath>
#include<string>

using namespace std;
using ll = long long;
#define rep(i, n) for(ll i = 0; i < (n); ++i)
int main (void){
	ll N,M,sum=1,nbuf=1;
	cin >> N >> M;

	 
	rep(i,M){
		nbuf=nbuf*N;
		sum+=nbuf;
		if(sum>pow(10,9)){
			cout << "inf" << endl;
			return 0;
		}
	}
	cout << sum << endl;
}
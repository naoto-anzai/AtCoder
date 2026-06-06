/* AtCoder Beginner Contest 000 A */

#include<iostream>
#include<vector>
#include <unordered_set>
#include <iterator>
#include <algorithm>
#include <string>

using namespace std;
using ll = long long;
#define rep(i, n) for(ll i = 0; i < n; i++)

int main(){
	
	ll N,max=0;
	
	cin >> N;

	vector<ll> A(N);

	rep(i,N){
		cin >> A.at(i);
	}

	/*cout << endl;
	rep(i,N)
		cout << A.at(i);
	cout << endl;
	*/

	rep(i,N){
		unordered_set<ll> l,r;
		rep(j,i){
			l.insert(A.at(j));
		}
		for(int j=i;j<N;j++){
			r.insert(A.at(j));
		}
		
		//cout << i << "," << l.size() << "," << r.size();
		//cout << endl;

		if(max<l.size()+r.size())
			max=l.size()+r.size();
	}

	cout << max << endl;

}

#include<iostream>
#include<vector>
#include <unordered_set>
#include <iterator>
#include <algorithm>
#include <string>
#include <map>

using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main (void){
	int N;
	cin >> N;

	vector<int> A(N);
	map<int,int> nmap;
	map<int,int> pmap;
	rep(i,N){
		cin >> A[i];
		nmap[A[i]] += 1;
		pmap[A[i]] = i;
	}
	
	vector<int> ans(2);
	ans[0] = -1;
	ans[1] = -1;

	for(const auto& [key, value] : nmap){
		if(value==1){
			if(ans[0]<key){
				ans[0] = key;
				ans[1] = pmap[key]+1;
			}
		}
	}

	cout << ans[1] ;
}
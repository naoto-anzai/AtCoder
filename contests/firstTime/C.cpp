#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;//input
	int *A;

	int *B;

	cin >> N;
	A = new int [N];
	B = new int [N];

	for(int i=0;i<N;i++){
		cin >> A[i];
	}

	for(int i=0;i<Q;i++){
		if(d[i]%q[t[i]] == r[t[i]]){
			ans[i] = d[i];
		}
		else{
			ans[i] = d[i]-d[i]%q[t[i]]+r[t[i]];
			if(d[i]%q[t[i]] > r[t[i]]){
				ans[i] += q[t[i]];
			}
		}
	}

	for(int i=0;i<N;i++){
		cout >> ans[i] >> " ";
	}
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,Q;//input
	int *q,*r;
	int *t,*d;

	int *ans;

	cin >> N;
	q = new int [N];
	r = new int [N];

	for(int i=0;i<N;i++){
		cin >> q[i];
		cin >> r[i];
	}

	cin >> Q;
	t = new int [Q];
	d = new int [Q];
	ans = new int [Q];

	for(int i=0;i<Q;i++){
		cin >> t[i];
		cin >> d[i];
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

	for(int i=0;i<Q;i++){
		cout >> ans[i] >> endl;
	}
}

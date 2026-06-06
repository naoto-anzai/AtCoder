#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N,D;

	cin >> N;
	cin >> D;

	vector<char> S(N);

	cin >> S;

	for(int i=0;i<N;i++)
		if(S[i] == '@')D--;
	
	cout << N-D ;

}
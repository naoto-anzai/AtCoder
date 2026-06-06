#include<iostream>
#include<unordered_set>

using namespace std;
using ll = long long;
#define rep(i, n) for(ll i = 0; i < (n); ++i)
int main (void){
	ll N,buf,cnt=0,anum=0,bnum=1;
	cin >> N;

	unordered_set<ll> a2;
	unordered_set<ll> b2;
	unordered_set<ll> a22b;	

	buf=2;
	while(buf<=N){
		a2.insert(buf);
		anum++;
		cout << "test_a : " << anum << "-" << buf << endl;
		buf=buf*2;
	}
	buf=1;
	while(buf<=N/2){
		b2.insert(buf);
		cout << "test_b : " << bnum << "-" << buf << endl;
		bnum++;
		buf=bnum*bnum;
	}
	for(auto aitr = a2.begin(); aitr != a2.end(); ++aitr){
		for(auto bitr = b2.begin(); bitr != b2.end(); ++bitr){
			if((*aitr)*(*bitr)<=N)
				a22b.insert((*aitr)*(*bitr));
		}
	}

	
	for(auto itr = a22b.begin(); itr != a22b.end(); ++itr){
		cout << "test__ : " << cnt << "-" << *itr << endl;
		cnt++;
	}

	ll ans = a22b.size();

	cout << ans << endl;
}
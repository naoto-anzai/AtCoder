#include <bits/stdc++.h>
using namespace std;
#define lint long long unsigned
#define slint long long
#define rep(i,n) for(lint i=0; i<n; i++)
#define rrep(b,i,n) for(lint i=b; i<n; i++)
#define lep(it,a) for(auto it = a.begin(); it != a.end(); it++)
#define rlep(it,a) for(auto it = a.rbegin(); it != a.rend(); it++)
#define INF 100000

int main (){
 lint N;
 cin >> N;
 
 lint abs=1, ans=0;
 rep(i,N+1){
   lint L;
   cin >> L;
   L*=2;
   lint _max, _min;
   if(abs<L){
     ans++;
     _max=L;
     _min=abs;
   }else{
     _max=abs;
     _min=L;
   }
   abs = _max - _min;
 }
 cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
#define lint long long unsigned
#define slint long long
#define slint long long
#define rep(i,n) for(lint i=0; i<n; i++)
#define rrep(b,i,n) for(lint i=b; i<n; i++)
#define lep(it,a) for(auto it = a.begin(); it != a.end(); it++)
#define rlep(it,a) for(auto it = a.rbegin(); it != a.rend(); it++)
#define INF 100000

int main (){
 lint N;
 cin >> N;
 
 lint ans=0;
 vector<slint> L(N);
 rep(i,N){
   lint l;
   cin >> l;
   l*=2;
   L[i] = l;
 }
 rep(bit,pow(2,N)){
   lint _ans=0;
   slint _v=1,v=1;
   rep(i,N){
     if(bit & (1<<i)){
       v+=L[i];
     }else{
       v-=L[i];
     }
     int s_v=_v/abs(_v);
     int sv = v/abs(v);
     if(sv*s_v<0){
       _ans++;
     }
     _v=v;
   }
   if(ans<_ans){
     ans=_ans;
   }
 }
 cout << ans;
}
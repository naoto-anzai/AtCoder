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
 lint T, X;
 cin >> T >> X;
 
 lint _A,A;
 cin >> _A;
 cout << "0 " << _A << endl;
 rrep(1,t,T+1){
   cin >> A;
   if(max(A,_A) - min(A,_A) >= X){
     cout << t << " " << A << endl;
     _A = A;
   }
 }
}
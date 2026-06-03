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
 
 string S;
 cin >> S;
 
 lint i=0;
 for(char c : S){
   if(c != 'o'){
     break;
   }
   i++;
 }
 
 cout << S.substr(i);
}
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
  lint N, K, M;
  cin >> N >> K >> M;
  
  vector<lint> C(N), V(N);
  rep(i,N){
    cin >> C[i] >> V[i];
  }
  
  map<lint,lint> map;
  priority_queue<lint> q1;
  priority_queue<lint> q2;
  
  rep(i,N){
    if(map.count(C[i])==0){
      map[C[i]]=V[i];
    }else{
      if(map[C[i]]<V[i]){
        q2.push(map[C[i]]);
        //cout << "q2:" << C[i] << ", " << V[i] << endl;
        map[C[i]]=V[i];
      }else{
        q2.push(V[i]);
        //cout << "q2:" << C[i] << ", " << V[i] << endl;
      }
    }
  }
  lep(it,map){
    q1.push(it->second);
    //cout << "q1:" << it->second << endl;
  }
  
  lint sum=0;
  lint i=0;
  while(i<M){
    i++;
    sum+=q1.top();
    //cout << "q1:" << q1.top() << endl;
    q1.pop();
  }
  
  while(i<K){
    i++;
    lint _q1=q1.top();
    lint _q2=q2.top();
    
    if(_q1>_q2){
      sum+=_q1;
      //cout << "q1:" << _q1 << endl;
      q1.pop();
    }else{
      sum+=_q2;
      //cout << "q2:" << _q2 << endl;
      q2.pop();
    }
  }
  
  cout << sum;
}
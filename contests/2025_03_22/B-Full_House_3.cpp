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
	vector<int> A(7);
	map<int,int> map;
	rep(i,7){
		cin >> A[i];
		map[A[i]] += 1;
	}

	int ov3 = 0;//３枚以上のカードの種類数
	int eq2 = 0;//２枚ちょうどのカードの種類数

	for(const auto& [key, value] : map){
		if(value>=3) ov3++;
		else if(value==2) eq2++;
	}

	string ans ;
	if(ov3>=2) ans = "Yes";
	else if(ov3==1 && eq2>=1) ans = "Yes";
	else ans = "No";

	cout << ans << endl;
}
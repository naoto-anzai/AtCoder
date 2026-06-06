#include<iostream>

using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main (void){
	int A,B;
	cin >> A;

	if(400%A==0)
		B=400/A;
	else B=-1;

	cout << B << endl;
}
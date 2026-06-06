#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[4];
	int num_a[4];
	int N;
	for(int i=0;i<4;i++){
		cin >> a[i];
		num_a[a[i]]++;
	}
	for(int i=0;i<2;i++){
		for(int j=1;j<3;j++){
			if(num_a[j]<num_a[j+1]){
				int tmp = num_a[j];
				num_a[j] = num_a[j+1];
				num_a[j+1] = num_a[j];
			}
		}
	}
	if(num_a[0] == 4){
		N = 2;
	}
	else if(num_a[0] == 3){
		N = 1;
	}
	else if(num_a[0] == 2){
		if(num_a[1] == 1){
			N = 2;
		}
		else{ 
			N=1;
		}
	}
	else{
		N = 0; 
	}
	cout << N;
}

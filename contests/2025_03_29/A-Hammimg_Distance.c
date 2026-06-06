#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(void){
	int N,cnt=0;
	scanf("%d",&N);

	char *S,Tbuf,dum;
	S = (int*)malloc(sizeof(int)*N);

	scanf("%c",&dum);
	rep(i,N){
		scanf("%c",S+i);
	}

	scanf("%c",&dum);
	rep(i,N){
		scanf("%c",&Tbuf);
		if(Tbuf!=S[i])
			cnt++;
	}
	printf("%d",cnt);
}
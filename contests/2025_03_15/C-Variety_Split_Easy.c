#include<stdio.h>
#include<stdlib.h>

int main(void){
	int N,max=0;
	int *A,*memo;

	char dum;

	scanf("%d",&N);
	A = (int*)malloc(sizeof(int)*N);
	memo = (int*)malloc(sizeof(int)*N);

	/*memoには、検索の際にエラーがないように0を代入しておく*/
	freeMemo(memo,N);
	for(int i=0;i<N;i++){
		scanf("%d",A+i);
		scanf("%c",&dum);
	}

	//puts("");
	//for(int i=0;i<N;i++)
		//printf("%d",A[i]);

	int l,r;
	int len=0;
	for(int i=1;i<N;i++){
		//puts("");

		for(int j=0;j<i;j++){
			if(seekInMemo(A[j],memo,len)){
				memo[len]=A[j];
				len++;
				//printf("+");
			}
		}
		freeMemo(memo,len);
		l=len;
		len=0;
		//printf(",");
		for(int j=i;j<N;j++){
			if(seekInMemo(A[j],memo,len)){
				memo[len]=A[j];
				len++;
				//printf("+");
			}
		}
		freeMemo(memo,len);
		r=len;
		len=0;

		//printf("i=%d: %d, %d",i,l,r);
		if(max<l+r)
			max=l+r;
	}

	//puts("");
	printf("%d",max);

}

/*めもに num なかったら1を返す*/
int seekInMemo(int num,int *memo,int len){
	int r=1;
	for(int i=0;i<len;i++){
		if(num==memo[i]){
			r=0;
			break;
		}
	}
	return r;
}

/*memo の初期化*/
void freeMemo(int *memo,int n){
	for(int i=0;i<n;i++)
		memo[i]=0;
}

/*分割統治で行う___やっぱ素直な全探索がよいかも*/
int VSE(int* a,int n){
	/*配列の確保*/
	int *la,*ra;

	if(n>1){
	/*Devide*/

		/*各数列の長さ*/
		int ln=n/2;
		int rn=n-ln; /*rの方が多い*/

		/*各配列のメモリ確保*/
		la = (int*)malloc(sizeof(int)*ln);
		ra = (int*)malloc(sizeof(int)*rn);

		/*各配列に、分割して代入*/
		for(int i=0;i<ln;i++)
			la[i]=a[i];
		for(int i=ln;i<n;i++)
			ra[i-ln]=a[i];
	/*Conquer*/

		/*各部分列ごとに再帰*/

	}

}
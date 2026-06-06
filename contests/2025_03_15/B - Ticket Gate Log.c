#include<stdio.h>
#include<stdlib.h>

int main(void){

	char S[100];
	int cnum=0;

	scanf("%s",&S);

	int i=0;
	int next = 1;

	/*1番目の文字が"o"なら cnum ++*/

	if(S[0]=='o')
		cnum++;

	while (next)
	{
		switch (S[i])
		{
		case 'i':
			if(S[i+1]!='o')
				cnum++;
			break;
		
		case 'o':
			if(S[i+1]=='o')
				cnum++;
			break;

		default:
			next = 0;
		}

	i++;
	}
	
	
	printf("%d",cnum);
}
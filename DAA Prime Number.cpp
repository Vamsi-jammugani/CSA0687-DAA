#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool is number(int n){
	if (n<=1){
		return false;
	}
	for (int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return ture;
}
int reverse(int n){
	int rev = 0;
	while (n>0){
		rev = rev*10+(n%10);
		n/=10;
	}
	return rev;
}
int main()
{
	int N;
	printf("enterr the limit N\n:");
	scanf("%d",&N);
	printf("Prime number upto %d whose reverse is also prime:\n",N);
	for(int i=2;i<=N;i++){
		if(is number(i)&& is number(reverse(i))){
			printf("%d\n",i);
		}
	}
	return 0;
}

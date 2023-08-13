#include<stdio.h>
int main()
{
	int n,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n%2 == n)
	printf("%d is an prime number",n);
	else
	printf("%d is not a prime number",n);
	return 0;
}

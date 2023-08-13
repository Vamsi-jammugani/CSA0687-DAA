#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,i,GCD_num,count=0;
	printf("enter any two numbers:\n");
	count++;
	scanf("%d %d",&n1,&n2);
	count++;
	for(i=1;i<=n1&&i<=n2;++i)
	{
		count++;
		if(n1 % i==0&& n2 % i==0)
		GCD_num = i;
		count++;
	}
	count++;
	printf("GCD of two numbers %d and %d is %d\n ",n1,n2,GCD_num);
	count++;
	printf("%d\n",count);
	return 0;
}


#include<stdio.h>
int main()
{
	int num,rev_string = 0,reminder,count=0;
	count++;
	printf("enter the number:\n");
	count++;
	scanf("%d",&num);
	count++;
	while(num!=0){
		count++;
		reminder = num% 10;
		count++;
		rev_string = rev_string*10+reminder;
		count++;
		num/=10;
		count++;
	}
	count++;
	printf("the reverse of the given number is:%d\n",rev_string);
	count++;
	printf("%d\n",count);
	return 0;
}

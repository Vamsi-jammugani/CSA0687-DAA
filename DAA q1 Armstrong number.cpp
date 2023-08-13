#include<stdio.h>
#include<math.h>
int main(){
	int num,orginalNum,reminder,n=0,count=0;
	float result=0.0;
	printf("enter the integer:\n");
	count++;
	scanf("%d",&num);
	count++;
	orginalNum = num ;
	while(orginalNum!=0){
		count++;
		orginalNum/=10;
		count++;
		++n;
	}
	count++;
	orginalNum=num;
	while(orginalNum!=0){
		count++;
		reminder=orginalNum%10;
		count++;
		result+=pow(reminder,n);
		count++;
		orginalNum/=10;
		count++;
	}
	count++;
	if((int)result==num){
		
		printf("%d is an armstrong number\n",num);
		
	}
	else{
		printf("%d is not an armstrong number\n",num);
		
	}
	count++;
	printf("%d\n",count);
	return 0;
}


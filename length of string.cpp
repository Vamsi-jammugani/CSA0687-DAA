#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int length;
	printf("enter a string:");
	gets(a);
	length=strlen(a);
	printf("length of a string:%d",length);
}

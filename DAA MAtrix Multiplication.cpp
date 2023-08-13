#include<stdio.h>
#include<stdlib.h>
int main(){
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,count=0;
system("cls");
printf("enter the number of row=");
count++;
scanf("%d",&r);
count++;
printf("enter the number of column=");
count++;
scanf("%d",&c);
count++;
printf("enter the elements in the first matrix=\n");
count++;
count++;
for(i=0;i<r;i++)
{
	count++;
	for(j=0;j<c;j++)
{
	count++;
	count++;
	count++;
scanf("%d",&a[i][j]);
count++;
}
count++;
}
count++;
printf("enter the elements in the secound matrix=\n");
count++;
count++;
for(i=0;i<r;i++)
{
	count++;
	for(j=0;j<c;j++)
{
	count++;
	count++;
	count++;
scanf("%d",&b[i][j]);
count++;
}
count++;
}
count++;
printf("multiply of the matrix=\n");
count++;
count++;
for(i=0;i<r;i++)
{
	count++;
	for(j=0;j<c;j++)
{
	count++;
	count++;
	count++;
mul[i][j]=0;
count++;
count++;
for(k=0;k<c;k++)
{
	count++;
	count++;
	count++;
mul[i][j]+=a[i][k]*b[k][j];
count++;
}
count++;
}
count++;
}
count++;
count++;
for(i=0;i<k;i++)
{
	count++;
	for(j=0;j<c;j++)
	{
		count++;
		count++;
		count++;
		printf("%d\t",mul[i][j]);
		count++;
	}
	count++;
printf("\n");
}
count++;

printf("%d\n",count);
return 0;
}

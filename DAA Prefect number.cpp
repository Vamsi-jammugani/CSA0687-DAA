#include <stdio.h>
int main()
{
    int number, rem, sum = 0, i,count=0;
    count++;
    count++;
    printf("Enter a Number: \n");
    count++;
    scanf("%d", &number);
    count++;
    count++;
    for (i = 1; i <= (number - 1); i++)
    {
    	count++;
    	count++;
    	count++;
        rem = number % i;
        count++;
	if (rem == 0)
        {
        	count++;
            sum = sum + i;
            count++;
        }
    }
    count++;
    if (sum == number) 
        printf("%d is perfect number\n", number);
    else
        printf("%d is not a perfect number\n", number);
        count++;
    printf("%d\n",count);
    return 0;
}

#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, array[100],count=0;
count++;
printf("Enter number of elements: ");
count++;
scanf("%d",&n);
count++;
printf("Enter %d integers: ", n);
count++;
count++;
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
count++;
printf("Enter value to find: ");
count++;
scanf("%d", &key);
count++;
low = 0;
count++;
high = n - 1;
count++;
mid = (low+high)/2;
count++;
count++;
while (low <= high) {
	count++;
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d\n", key, mid+1); 
count++;
break;
}
else
high = mid - 1;
count++;
mid = (low + high)/2;
count++;
}
count++;
if(low > high)   
count++;
printf("Not found! %d isn't present in the list\n", key);
count++;
printf("%d\n",count);
}

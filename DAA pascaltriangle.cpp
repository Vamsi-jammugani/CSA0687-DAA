#include <stdio.h>
int main()
{
    int no_row,c=1,blk,i,j,count=0;
    count++;
    printf("Input number of rows: ");
    count++;
    scanf("%d",&no_row);
    count++;
    for(i=0;i<no_row;i++)
    {
        for(blk=1;blk<=no_row-i;blk++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
            count++;
        }
        printf("\n");
        count++;
    }
    printf("%d\n",count);
     return 0;
}

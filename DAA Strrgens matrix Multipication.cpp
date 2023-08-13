 #include<stdio.h>
int main(){
  int a[2][2], b[2][2], c[2][2], i, j,count=0;
  int m1, m2, m3, m4 , m5, m6, m7;
 
  printf("Enter the 4 elements of first matrix: ");
  count++;
  for(i = 0;i < 2; i++)
      for(j = 0;j < 2; j++)
           scanf("%d", &a[i][j]);
            count++;
  printf("Enter the 4 elements of second matrix: ");
   count++;
  for(i = 0; i < 2; i++)
      for(j = 0;j < 2; j++)
           scanf("%d", &b[i][j]);
            count++;
  printf("\nThe first matrix is\n");
   count++;
  for(i = 0; i < 2; i++){
  	 count++;
      printf("\n");
       count++;
      for(j = 0; j < 2; j++)
           printf("%d\t", a[i][j]);
            count++;
  }
   count++;
 
  printf("\nThe second matrix is\n");
   count++;
  for(i = 0;i < 2; i++){
  	 count++;
      printf("\n");
       count++;
      for(j = 0;j < 2; j++)
           printf("%d\t", b[i][j]);
            count++;
  }
   count++;
 
  m1= (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
   count++;
  m2= (a[1][0] + a[1][1]) * b[0][0];
   count++;
  m3= a[0][0] * (b[0][1] - b[1][1]);
   count++;
  m4= a[1][1] * (b[1][0] - b[0][0]);
   count++;
  m5= (a[0][0] + a[0][1]) * b[1][1];
   count++;
  m6= (a[1][0] - a[0][0]) * (b[0][0]+b[0][1]);
   count++;
  m7= (a[0][1] - a[1][1]) * (b[1][0]+b[1][1]);
   count++;
 
  c[0][0] = m1 + m4- m5 + m7;
   count++;
  c[0][1] = m3 + m5;
   count++;
  c[1][0] = m2 + m4;
   count++;
  c[1][1] = m1 - m2 + m3 + m6;
   count++;
 
   printf("\nAfter multiplication using Strassen's algorithm \n");
    count++;
   for(i = 0; i < 2 ; i++){
   	 count++;
      printf("\n");
       count++;
      for(j = 0;j < 2; j++)
       count++;
           printf("%d\t", c[i][j]);
            count++;
   }
    count++;
    printf("%d\n",count);
 
   return 0;
}

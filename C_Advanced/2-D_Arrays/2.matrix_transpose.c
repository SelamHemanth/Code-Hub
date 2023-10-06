#include<stdio.h>

int main()
{
int arr[3][2]={{1,3},{4,5},{7,8}},arr1[2][3];
printf("Input 3*2 array:\n");
for(int i=0;i<3;i++)
{
for(int j=0;j<2;j++)
printf("%d\t",arr[i][j]);
printf("\n");
}

for(int i=0,k=0;i<3||k<2;i++,k++)
{
for(int j=0,l=0;j<2||l<3;j++,l++)
arr1[l][k]=arr[i][j];
}
printf("\nTransposed 2*3 array:\n");
for(int i=0;i<2;i++)
{
for(int j=0;j<3;j++)
printf("%d\t",arr1[i][j]);
printf("\n");
}
return 0;
}

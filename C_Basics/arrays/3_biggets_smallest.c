#include<stdio.h>
int main()
{
	int arr[10],s,b=0,ib,is;
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	printf("Array: ");
	for(int i=0;i<10;i++)
	{
	if(i==0)
	{
s=arr[0];
b=arr[0];
ib=is=i;
}
	printf("%d ",arr[i]);
		if(arr[i]>b)
		{
			b=arr[i];
			ib=i;
		}
		if(arr[i]<s)
		{
			s=arr[i];
			is=i;
		}
	}
	printf("\nBiggest value is %d and index is %d\n",b,ib);
	printf("Smallest value is %d and index is %d\n",s,is);
}

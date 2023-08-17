#include<stdio.h>

int main()
{
int arr1[5] = {};
printf("%ld\nEnter values:\n",sizeof(arr1));
for(int i=0;i<5;i++)
scanf("%d",&arr1[i]);
for(int i=0;i<5;i++)
printf("%d",arr1[i]);
}

/*
Output:20
Enter values:
1
2
3
4
5

Description: The array size is 5, So,it accepts 5 elements only and prints 5 elements only.
*/


int main()
{
int arr2[10] = {2.4,5.6,7.3};
printf("%ld\n",sizeof(arr2));
for(int i=0;i<10;i++)
printf("%d ",arr2[i]);
}

/*
Output:40
2 5 7 0 0 0 0 0 0 0 

Descritpion:The array size is 10.But the elements are 3 only.So,the float values are typecast to integer values and remaining index values are zeros.
*/



int main()
{
int arr3[3] = {1,2,3,4,5};
printf("%ld\n",sizeof(arr3));
for(int i=0;i<3;i++)
printf("%d ",arr3[i]);
}

/*
Output:(It shows warnings)
4_array_syntaxes.c: In function ‘main’:
4_array_syntaxes.c:40:22: warning: excess elements in array initializer
 int arr3[3] = {1,2,3,4,5};
                      ^
4_array_syntaxes.c:40:22: note: (near initialization for ‘arr3’)
4_array_syntaxes.c:40:24: warning: excess elements in array initializer
 int arr3[3] = {1,2,3,4,5};
                        ^
4_array_syntaxes.c:40:24: note: (near initialization for ‘arr3’)

executed Output:12
1 2 3 

Description:The array size is 3 .So,it accepts 3 elements only.remainings are garbage
*/



int main()
{
int arr4[0] = {};
printf("%ld\n",sizeof(arr4));
for(int i=0;i<5;i++)
printf("%d\n",arr4[i]);
}

/*
Output:0
32767
1232427008
-785212835
2039142192
21898

Description:The size of array is 0,So,array not accepts elements .It prints garbage values
*/



int main()
{
int arr5[0] = {1,2,3,4,5};
printf("%ld\n",sizeof(arr5));
for(int i=0;i<5;i++)
printf("%d\n",arr5[i]);
}

/*
Output:(It shows warnings)
4_array_syntaxes.c: In function ‘main’:
4_array_syntaxes.c:84:16: warning: excess elements in array initializer
 int arr5[0] = {1,2,3,4,5};
                ^
4_array_syntaxes.c:84:16: note: (near initialization for ‘arr5’)
4_array_syntaxes.c:84:18: warning: excess elements in array initializer
 int arr5[0] = {1,2,3,4,5};
                  ^
4_array_syntaxes.c:84:18: note: (near initialization for ‘arr5’)
4_array_syntaxes.c:84:20: warning: excess elements in array initializer
 int arr5[0] = {1,2,3,4,5};
                    ^
4_array_syntaxes.c:84:20: note: (near initialization for ‘arr5’)
4_array_syntaxes.c:84:22: warning: excess elements in array initializer
 int arr5[0] = {1,2,3,4,5};
                      ^
4_array_syntaxes.c:84:22: note: (near initialization for ‘arr5’)
4_array_syntaxes.c:84:24: warning: excess elements in array initializer
 int arr5[0] = {1,2,3,4,5};
                        ^
4_array_syntaxes.c:84:24: note: (near initialization for ‘arr5’)

Executed Output:0
32767
544711680
-76418984
-1430014160
22055

Description:The size of array is 0.So,Array not accepts elements to store.If we try to print the array,garbage values are print.
*/



int main()
{
int arr6[] = {};
printf("size before assigning values: %ld\n",sizeof(arr6));
for(int i=0;i<5;i++)
printf("%d\n",arr6[i]);
printf("\nEnter values:\n");
for(int i=0;i==5;i++)
scanf("%d",&arr6[i]);
printf("\nAfter values entered:\n");
for(int i=0;i<5;i++)
printf("%d\n",arr6[i]);
printf("\nsize After assingning values: %ld\n",sizeof(arr6));
}

/*
Output:
size before assigning values: 0
32764
1409430784
1666400596
1935243392
21918

Enter values:

After values entered:
32764
1409430784
1666400596
1935243392
21918

size After assingning values: 0

Description:The array size have no value. So,size of array is 0. Because,it prints garbage values.*/



int main()
{
int arr7['a'];
printf("size=%ld\n",sizeof(arr7));
}

/*
Output:
size=388
Description:charecter 'a' ASCII values is 97 and integer data type size is 4. So,the size of array is  97*4=388.*/

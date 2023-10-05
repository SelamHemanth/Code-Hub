#include<stdio.h>

int * stat();

int main()
{
    int arr[10];
    int *v=0;
    int l=sizeof(arr)/4;
    printf("Enter array elemets:\n");
    for(int i=0;i<l;i++)
        scanf("%d",&(*(arr+i)));
    printf("\n");    
    for(int i=0;i<=10;i++)
    {
        v=stat();
        printf("%d\n",*v);
        *v=(*(arr+i));
    }
}

int * stat()
{
    static int ptr=0;
    if(ptr!=0)
    {
        ptr=ptr*ptr;    
    }
    return &ptr;
}

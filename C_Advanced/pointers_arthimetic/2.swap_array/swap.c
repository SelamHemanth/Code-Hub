void swap(int *arr)
{
int i;
i=(int)(*(arr+1));
(*(arr+1))=(int)(*(arr));
(*(arr))=i;
}

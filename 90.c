#include<stdio.h>
void main()
{
    int arr[10] = {1,2,3,4};
    int noe = sizeof(arr)/sizeof(arr[0]);
    printf("size -> %lu\n",sizeof(arr));
    printf("number of elements -> %d",noe);
}
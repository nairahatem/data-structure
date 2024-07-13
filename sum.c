#include <stdio.h>
int sum(int arr[],int len);
int main(void) {

int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("sum is:%d",sum(arr,len));

    return 0;
}
int sum(int arr[],int len)
{
    if(len<=0)
        return 0;

    int res=sum(arr,len-1)+arr[len-1];
    return res;
}
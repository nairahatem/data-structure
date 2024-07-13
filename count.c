#include <stdio.h>
int count(int arr[],int len);
int main(void) {

int arr[]={1,2,3,4,5,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("the number of items in array is:%d",count(arr,len));

    return 0;
}
int count(int arr[],int len)
{
    if(len<=0)
        return 0;

        int res = count(arr, len - 1) + 1;

        return res;

}
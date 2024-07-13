#include <stdio.h>
int findmax(int arr[],int len);
int max(int a,int b);
int main(void) {

int arr[]={10,2,13,-7,4,-3,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("the maximum of number in array is:%d", findmax(arr,len));

    return 0;
}
int findmax(int arr[],int len)
{
    if(len==1)
        return arr[0];

        int res = max(arr[len-1],findmax(arr, len - 1));

        return res;

}
int max(int a,int b)
{
    return a>b?a:b;
}
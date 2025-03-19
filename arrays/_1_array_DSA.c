#include <stdio.h>
int main(){
    int arr[]={44,6,5,9,10,11,12,8,22,33};
    int leng=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    for(int i=0;i<leng;i++){
        if(min>arr[i])
            min=arr[i];
    }
    printf("Min of arr: %d\n",min);
}

#include <stdio.h>
typedef enum{false,true} bool;

int main(){
    int a[]={1,2,3,4,5,6,7,8,9,11,10,12,13,14,15};
    int n=sizeof(a)/sizeof(a[0]);
    bool swapped;
    int tem;
    //neu muon toi uu toc do nen tao them bien swapped
    for(int j=1;j<n;j++){
        swapped=false;
        for(int i=0;i<n-j;i++){
            if(a[i]>a[i+1]){
                int tem=a[i];
                a[i]=a[i+1];
                a[i+1]=tem;
                swapped=true;
            }
        }
         if(swapped==false){
            break;
         }
    }
    for(int i=0;i<n;i++){
        printf("%d, ",a[i]);
    }
    return 0;
}
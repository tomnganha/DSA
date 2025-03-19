#include <stdio.h>
int main(){
    int a[]={64, 34, 25, 5, 22, 11, 90, 12};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=1;i<n;i++){
        int currentValue=a[i];
        int j=i-1;
        int insertIndex=i;
        while (j>=0&&a[j]>currentValue)
        {
            a[j+1]=a[j];
        }
        
    }
    return 0;
}



// #include <stdio.h>

// int main() {
//     int myArray[] = {64, 34, 25, 12, 22, 11, 90, 5};
//     int n = sizeof(myArray) / sizeof(myArray[0]);

//     for (int i = 1; i < n; i++) {
//         int insertIndex = i;
//         int currentValue = myArray[i];
//         int j = i - 1;

//         while (j >= 0 && myArray[j] > currentValue) {
//             myArray[j + 1] = myArray[j];
//             insertIndex = j;
//             j--;
//         }
//         myArray[insertIndex] = currentValue;
//     }

//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", myArray[i]);
//     }

//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int a[]={64, 34, 25, 5, 22, 11, 90, 12};
//     int n=sizeof(a)/sizeof(a[0]);
//     int id;
//     int temp;
//     for(int i=1;i<n;i++){
//         if(a[i]>a[i-1])
//             continue;
//         for(int j=0;j<=i-1;j++){
//             if(a[j]>a[i]){
//                 id=j;
//                 break;
//             }
//         }
//         temp=a[i];
//         for(int k=i;k>id;k--){
//             a[k]=a[k-1];
//         }
//         a[id]=temp;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d, ",a[i]);
//     }
//     return 0;
// }
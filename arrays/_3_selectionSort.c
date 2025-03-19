#include <stdio.h>
int main() {
    int my_array[] = {64, 34, 25, 5, 22, 11, 90, 12};
    int n = sizeof(my_array) / sizeof(my_array[0]);

    for (int i = 0; i < n-1; i++) {
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (my_array[j] < my_array[min_index]) {
                min_index = j;
            }
        }
        int min_value = my_array[min_index];
        for (int k = min_index; k > i; k--) {
            my_array[k] = my_array[k-1];
        }
        my_array[i] = min_value;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", my_array[i]);
    }
    printf("\n");

    return 0;
}
// int main(){
//     int a[]={4,1,3,5,2,9,7,6,8,10,15,12,13};
//     int n=sizeof(a)/sizeof(a[0]);
//     int temp;
//     int id;
//     for(int i=0;i<n-1;i++){
//         id=i;
//         for(int j=i;j<n;j++){
//             if(a[id]>a[j]){
//                 id=j;
//             }
//         }
//         temp=a[i];
//         a[i]=a[id];
//         a[id]=temp;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d, ",a[i]);
//     }
//     return 0;
// }
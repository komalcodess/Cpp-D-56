#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    float arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d:",i+1);
        scanf("%f",&arr[i]);
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] < arr[j+1]){
                float temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1] =temp;
            }
        }
    }

    printf("Sorted array in descending order:");
    for(int i=0;i<n;i++){
        printf("%.2f ",arr[i]);
    }
    printf("\n");


}

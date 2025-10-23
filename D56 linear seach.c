#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int key, found=0;
    printf("Enter the element to search:");
    scanf("%d",&key);

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Element found at position %d\n",i+1);
            found=1;
            break;}
            }

    if(found==0){
        printf("Element not found\n");
    }
}

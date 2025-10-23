    #include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    float arr[n];
    for(int i=0;i<n;i++){
        printf("Enter element %d:",i+1);
        scanf("%f",&arr[i]);
    }

    for(int i=1;i<n;i++){
        float k=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]<k){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }

    printf("Sorted array in descending order:");
    for(int i=0;i<n;i++){
        printf("%.2f ",arr[i]);
    }
    printf("\n");


}

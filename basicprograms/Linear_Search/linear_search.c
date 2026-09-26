#include <stdio.h>

int main(){

    int n,target,j=0;

    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];

    puts("Enter the elements");

    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Which element to search for:");
    scanf("%d",&target);

    for (int f=0;f<n;f++){
        if(arr[f]==target){
            j=f+1;
            printf("%d found at index %d ",target,f);
            break;
        }
    }
    if (j==0){
        printf("The element not found");
    }
}
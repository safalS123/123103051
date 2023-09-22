#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("the largest number in the array is %d \n",max);
    printf("the smallest number in the array is %d \n",min);
    return 0;
}
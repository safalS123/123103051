#include <stdio.h>
int main(){
    printf("enter the size of the array \n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("enter the array \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int even=0,ngtive=0,odd=0;

    for(int i=0;i<n;i++){     // solved by considering -ve numbers as even or odd
        if(a[i]<0)
        ngtive++;
        if(a[i]%2==0)        //if you dont consider -ve numbers as even or odd use else if here instead of if
        even++;
        if(a[i]%2!=0)       //if you dont consider -ve numbers as even or odd use else if here instead of if
        odd++;
    }
    printf("the  number of negative elements are %d \n",ngtive);
    printf("the  number of even elements are %d \n",even);
    printf("the  number of odd elements are %d \n",odd);
}
#include<stdio.h>

    int main(){
      int n;
        printf("enter size of array\n");
        scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++ ){
        printf("enter %d element\n",i+1);
        scanf("%d",&array[i]);
    }
      for(int i=0;i<n;i++ ){
        printf(" element %d is %d\n",i+1,array[i]);
        
    }
    int j=0;
   int size=(n+1)/2;
    int sum_pair[size];
    for(int i=0;i<n;i+=2){
        
        sum_pair[j]=array[i]+array[i+1];
        j++;
    }
    if((n%2)!=0){
        sum_pair[size-1]=array[n-1]*2;
    }
     for(int i=0;i<size;i++ ){
        printf(" pairwise sum element %d & %d is %d\n",i*2+1,2*i+2,sum_pair[i]);
        
    }

return 0;
}

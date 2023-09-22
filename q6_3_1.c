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
    int sum_e=0;
    for(int i=1;i<n;i+=2){
        sum_e=sum_e+array[i];
    }
    printf("sum of even positioned = %d\n",sum_e);
 int sum_o=0;
    for(int i=0;i<n;i+=2){
        sum_o=sum_o+array[i];
    }
    printf("sum of odd positioned = %d",sum_o);

return 0;
}

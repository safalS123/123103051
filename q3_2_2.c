#include<stdio.h>
//1 5 10 15
    int main(){
        int sum=1,N;
        printf("sum upto?\n");
        scanf("%d",&N);
        for(int n=5; n<=N; n=n+5){
            sum =sum +n;
        }
        printf("sum of series=%d",sum);
    

return 0;
}

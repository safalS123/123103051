#include<stdio.h>
#include <math.h>
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++)
    f*=i;
    return f;
}
    int main(){
        printf("Enter x");
        int x;
        scanf("%d",&x);
        printf("Enter n");
        int n;
        scanf("%d",&n);
        float sum=0,a;
        int p=1;
    for(int i=1;i<=n;i+=2)
    {
        a=(float)(pow(x,i)/fact(i));
        if(p%2!=0){ 
        sum+=a;
        p++;
        }
        else{
            sum-=a;
            p++;
        }
    }
    printf("sum of the series is %f\n",sum);

return 0;
}
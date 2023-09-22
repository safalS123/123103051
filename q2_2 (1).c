#include<stdio.h>
void greater(int a, int b, int c){
    if(a>b && a>c ){
        printf("a is greatest\n");
    }
   else if(b>c && b>a ){
        printf("b is greatest\n");
    }
   else {
        printf("c is greatest\n");
    }
    
}
    int main(){
    int a,b,c;
    printf("enter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    greater(a,b,c);

return 0;
}

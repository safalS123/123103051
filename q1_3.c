#include<stdio.h>

    int main(){
    float p,r,t;

printf("enter principal, time and rate\n" );
scanf("%f %f %f",&p,&r,&t);
float SI=p*r*t/100;
printf("simple interest =%f",SI);

return 0;
}

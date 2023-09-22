#include<stdio.h>

    int main(){
    float r;
    
    printf("enter radius\n");
    scanf("%f",&r);
    float area=3.14*r*r;
    printf("area of circle=%0.2f\n",area);
float a;

printf("enter side of triangle\n");
scanf("%f",&a);
printf("area of triangle=%0.2f\nperimeter of triangle=%0.2f",(1.73/2)*a*a,3*a);

return 0;
}

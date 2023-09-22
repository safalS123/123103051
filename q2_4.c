#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int max_num, min_num;
    
   
    max_num = min_num = a;
    

    if (b > max_num) {
        max_num = b;
    } else if (b < min_num) {
        min_num = b;
    }
    
   
    if (c > max_num) {
        max_num = c;
    } else if (c < min_num) {
        min_num = c;
    }
    
  
    if (d > max_num) {
        max_num = d;
    } else if (d < min_num) {
        min_num = d;
    }
    
    printf("Maximum number: %d\n", max_num);
    printf("Minimum number: %d\n", min_num);
    
    return 0;
}

#include <stdio.h>
//
//   1
//  121 
// 12321
//1234321

int main() {
    int n;

    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
       
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

       
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

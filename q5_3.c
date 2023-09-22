#include <stdio.h>

void convertToWords(int num) {
    char *units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num < 1 || num > 9999) {
        printf("Invalid input\n");
        return;
    }

    if (num >= 1000) {
        printf("%s Thousand ", units[num / 1000]);
        num %= 1000;
    }

    if (num >= 100) {
        printf("%s Hundred ", units[num / 100]);
        num %= 100;
    }

    if (num >= 20) {
        printf("%s ", tens[num / 10]);
        num %= 10;
    } else if (num >= 11) {
        printf("%s ", teens[num - 10]);
        return;
    }

    if (num > 0) {
        printf("%s ", units[num]);
    }
}

int main() {
    int num;

    printf("Enter a number (1 to 9999): ");
    scanf("%d", &num);

    convertToWords(num);

    printf("\n");

    return 0;
}

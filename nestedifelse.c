#include <stdio.h>

int main() {
    int num = 0;

    if (num > 0) {
        printf("%d is positive.\n", num);
    } else {
        if (num < 0) {
            printf("%d is negative.\n", num);
        } else {
            printf("Number is zero.\n");
        }
    }
    return 0;
}

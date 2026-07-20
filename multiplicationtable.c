#include <stdio.h>

int main() {
    int num;

    printf("Enter a number to see its multiplication table: ");
    scanf("%d", &num);

    // Loop runs from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}


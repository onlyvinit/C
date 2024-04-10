#include <stdio.h>

int main() {
    int num = 200;
    for (int i = 1; i <= num; i++) {
        if (i % 4 == 0 && i % 8 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

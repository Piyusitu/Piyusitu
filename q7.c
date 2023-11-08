#include <stdio.h>

int SimpleFunction(int y[], int n, int x) {
    int total = y[0];

    for (int loopIndex = 1; loopIndex <= n - 1; loopIndex++) {
        total = x * total + y[loopIndex];
    }

    return total;
}

int main() {
    int z[10];
    for (int i = 0; i < 10; i++) {
        z[i] = 1;
    }

    int result = SimpleFunction(z, 10, 2);
    printf("Result: %d\n", result);

    return 0;
}

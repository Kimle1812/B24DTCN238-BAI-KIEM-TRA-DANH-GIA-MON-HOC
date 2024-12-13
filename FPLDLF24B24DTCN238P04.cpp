#include <stdio.h>

int main() {
    float V, R1, R2, result;
    V = 10.0;
    R1 = 5.0;
    R2 = 2.0;
    result = (V * R2) / (R1 + R2);
    printf("Ket qua cua bieu thuc là: %f\n", result);

    return 0;
}


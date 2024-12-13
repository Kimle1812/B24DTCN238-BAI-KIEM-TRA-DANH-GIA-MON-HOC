#include <stdio.h>
#include <limits.h>
#include <float.h>
//Ho va ten: NGUYEN THI KIM LE
// Ma so sinh vien: B24DTCN238
//BAI 01 

int main() {
    printf("Kieu du lieu int:\n");
    printf("Do rong: %lu bits\n", sizeof(int) * 8);
    printf("Gia tri nho nhat: %d\n", INT_MIN);
    printf("Gia tri lon nhat: %d\n\n", INT_MAX);

    printf("Kieu du lieu unsigned int:\n");
    printf("Do rong: %lu bits\n", sizeof(unsigned int) * 8);
    printf("Gia tri nho nhat: 0\n");
    printf("Gia tri lon nhat: %u\n\n", UINT_MAX);

    printf("Kieu du lieu long:\n");
    printf("Do rong: %lu bits\n", sizeof(long) * 8);
    printf("Gia tri nho nhat: %ld\n", LONG_MIN);
    printf("Gia tri lon nhat: %ld\n\n", LONG_MAX);

    printf("Kieu du lieu unsigned long:\n");
    printf("Do rong: %lu bits\n", sizeof(unsigned long) * 8);
    printf("Gia tri nho nhat: 0\n");
    printf("Gia tri lon nhat: %lu\n\n", ULONG_MAX);

    printf("Kieu du lieu float:\n");
    printf("Do rong: %lu bits\n", sizeof(float) * 8);
    printf("Gia tri nho nhat: %e\n", FLT_MIN);
    printf("Gia tri lon nhat: %e\n\n", FLT_MAX);

    printf("Kieu du lieu double:\n");
    printf("Do rong: %lu bits\n", sizeof(double) * 8);
    printf("Gia tri nho nhat: %e\n", DBL_MIN);
    printf("Gia tri lon nhat: %e\n\n", DBL_MAX);

    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    float r1, r2, h, slant_height, lateral_area;
    r1 = 5.0;
    r2 = 3.0;
    h = 4.0;
    slant_height = sqrt(pow(r1 - r2, 2) + pow(h, 2));
    lateral_area = M_PI * (r1 + r2) * slant_height;
    printf("Dien tich xung quanh cua hinh non cut là: %f\n", lateral_area);

    return 0;
}


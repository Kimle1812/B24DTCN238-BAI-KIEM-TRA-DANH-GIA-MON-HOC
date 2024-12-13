#include <stdio.h>
#include <math.h>
float tinhDienTichXungQuanh(float r1, float r2, float h) {
    float slant_height = sqrt(pow(r1 - r2, 2) + pow(h, 2));
    return M_PI * (r1 + r2) * slant_height;
}
int main() {
    float r1, r2, h, lateral_area;
    r1 = 5.0;
    r2 = 3.0;
    h = 4.0;
    lateral_area = tinhDienTichXungQuanh(r1, r2, h);
    printf("Dien tich xung quanh cua hinh non cut là: %f\n", lateral_area);

    return 0;
}


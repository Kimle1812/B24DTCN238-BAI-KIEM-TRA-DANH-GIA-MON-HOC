#include <stdio.h>
typedef struct {
    char tenDuAn[50];
    char diaChi[100];
    float dienTich;
    float giaBan;
} DuAnBatDongSan;
void nhapThongTinDuAn(DuAnBatDongSan *duAn) {
    printf("Nhap ten du an: ");
    fgets(duAn->tenDuAn, sizeof(duAn->tenDuAn), stdin);
    printf("Nhap dia chi: ");
    fgets(duAn->diaChi, sizeof(duAn->diaChi), stdin);
    printf("Nhap dien tich (m2): ");
    scanf("%f", &duAn->dienTich);
    printf("Nhap gia ban (trieu VND): ");
    scanf("%f", &duAn->giaBan);
}
void inThongTinDuAn(DuAnBatDongSan duAn) {
    printf("\nThong tin du an bat dong san:\n");
    printf("Ten du an: %s", duAn.tenDuAn);
    printf("Dia chi: %s", duAn.diaChi);
    printf("Dien tich: %.2f m2\n", duAn.dienTich);
    printf("Gia ban: %.2f trieu VND\n", duAn.giaBan);
}
int main() {
    DuAnBatDongSan duAn;
    nhapThongTinDuAn(&duAn);
    inThongTinDuAn(duAn);
    return 0;
}


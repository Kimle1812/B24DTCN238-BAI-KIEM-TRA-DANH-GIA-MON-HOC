#include <stdio.h>
#include <string.h>

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
    getchar();
}

void inThongTinDuAn(DuAnBatDongSan duAn) {
    printf("\nThong tin du an bat dong san:\n");
    printf("Ten du an: %s", duAn.tenDuAn);
    printf("Dia chi: %s", duAn.diaChi);
    printf("Dien tich: %.2f m2\n", duAn.dienTich);
    printf("Gia ban: %.2f trieu VND\n", duAn.giaBan);
}

void sapXepTheoGiaBan(DuAnBatDongSan arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].giaBan > arr[j].giaBan) {
                DuAnBatDongSan temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int timKiemTheoGiaBan(DuAnBatDongSan arr[], int n, float giaMongMuon) {
    for (int i = 0; i < n; i++) {
        if (arr[i].giaBan > giaMongMuon) {
            return 1;
        }
    }
    return 0;
}


void inDanhSachDuAn(DuAnBatDongSan arr[], int n) {
    for (int i = 0; i < n; i++) {
        inThongTinDuAn(arr[i]);
    }
}

int main() {
    int n;
    printf("Nhap so luong du an: ");
    scanf("%d", &n);
    getchar(); 
    DuAnBatDongSan duAn[n];
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin du an thu %d:\n", i + 1);
        nhapThongTinDuAn(&duAn[i]);
    }
    sapXepTheoGiaBan(duAn, n);
    printf("\nDanh sach cac du an sau khi sap xep theo gia ban tang dan:\n");
    inDanhSachDuAn(duAn, n);
    float giaMongMuon;
    printf("\nNhap gia tri mong muon de tim kiem: ");
    scanf("%f", &giaMongMuon);

    if (timKiemTheoGiaBan(duAn, n, giaMongMuon)) {
        printf("Co du an co gia ban lon hon %.2f trieu VND.\n", giaMongMuon);
    } else {
        printf("Khong co du an nao co gia ban lon hon %.2f trieu VND.\n", giaMongMuon);
    }

    return 0;
}


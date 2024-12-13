#include <stdio.h>
#include <stdlib.h>

int tinhGiaTriTuyetDoi(int arr[], int n) {
    int tongChan = 0, tongLe = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            tongChan += arr[i];
        } else {
            tongLe += arr[i];
        }
    }

    return abs(tongChan - tongLe);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ketQua = tinhGiaTriTuyetDoi(arr, n);

    printf("Gia tri tuyet doi su khac biet giua tong cac so o vi tri chan va tong cac so o vi tri le la: %d\n", ketQua);

    return 0;
}


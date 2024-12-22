#include <stdio.h>

int main() {
    int arr[5];
    int sum = 0;

    // Nhap 5 so nguyen tu nguoi dung
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Tinh tong cac so le
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }

    // In ket qua
    printf("Tong cac so le: %d\n", sum);

    return 0;
}

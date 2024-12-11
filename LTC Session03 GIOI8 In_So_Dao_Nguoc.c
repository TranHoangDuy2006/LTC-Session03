#include <stdio.h>
#include <stdlib.h>

int main() {
    int so;
    printf("Nhap vao mot chuoi so nguyen bat ki: ");
    scanf("%d", &so);

    int abs_so = abs(so);

    printf("Cac chu so trong so %d la: ", so);

    if (abs_so == 0) {
        printf("0\n");
        return 0;
    }

    int daonguoc = 0;
    while (abs_so > 0) {
        daonguoc = daonguoc * 10 + abs_so % 10;
        abs_so /= 10;
    }

    while (daonguoc > 0) {
        printf("%d ", daonguoc % 10);
        daonguoc /= 10;
    }
    printf("\n");
    
    return 0;
}

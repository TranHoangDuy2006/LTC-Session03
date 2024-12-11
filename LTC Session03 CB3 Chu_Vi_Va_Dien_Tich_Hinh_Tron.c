#include <stdio.h>
#define PI 3.14

int main() {
    float bankinh, chuvi, dientich;
    printf("\n");

    printf("Nhap ban kinh cua hinh tron (r): ");
    scanf("%f", &bankinh);

    chuvi = 2 * PI * bankinh;         
    dientich = PI * bankinh * bankinh;
    printf("\n");                 

    printf("Chu vi cua hinh tron la: %.2f\n", chuvi);
    printf("\n");
    printf("Dien tich cua hinh tron la: %.2f\n", dientich);

    return 0;
}
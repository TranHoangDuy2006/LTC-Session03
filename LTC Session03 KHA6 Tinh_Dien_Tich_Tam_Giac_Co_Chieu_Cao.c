#include <stdio.h>

int main() {
    
    float canhtamgiac, chieucao, dientich;
    printf("\n");
    
    printf("Nhap do dai canh cua tam giac: ");
    scanf("%f", &canhtamgiac);
    printf("\n");
    
    printf("Nhap chieu cao tuong ung cua tam giac: ");
    scanf("%f", &chieucao);
    printf("\n");
    
    dientich = 0.5 * canhtamgiac * chieucao;
    printf("Dien tich cua tam giac la: %.2f", dientich);
    
    return 0;

}
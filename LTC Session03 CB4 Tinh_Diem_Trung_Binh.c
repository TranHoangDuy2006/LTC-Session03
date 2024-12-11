#include <stdio.h>

int main () {
    float diemtoan, diemvan ,diemanh, diemtrungbinh;
    printf("\n");
    
    printf("Nhap diem mon toan: ", diemtoan);
    
    scanf("%f", &diemtoan);
    printf("\n");
    
    printf("Nhap diem mon ngu van: ", diemvan);
    
    scanf("%f", &diemvan);
    printf("\n");
    
    printf("Nhap vao diem mon tieng anh: ", diemanh);
    
    scanf("%f", &diemanh);
    printf("\n");
    
    diemtrungbinh = (diemtoan + diemvan + diemanh) / 3;

    printf("\n");    
    printf("Diem trung binh ba mon la: %.2f", diemtrungbinh);

    return 0;

}

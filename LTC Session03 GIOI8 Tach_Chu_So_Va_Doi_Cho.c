#include <stdio.h>

int main() 
{
    int so, tach_1, tach_2, tach_3, tach_4;
    printf("\nNhap vao so nguyen co bon chu so: ");
    scanf("%d", &so);
    printf("\n");

    if (so < 1000 || so > 9999)
    {
        printf("Sai du lieu nhap vao, vui long chay lai chuong trinh!");
        return 1;
    }
    
    tach_1 = so / 1000;

    tach_2 = so / 100 % 10;

    tach_3 = so / 10 % 10;

    tach_4 = so % 10;
    
    printf("Cac ki tu so sau khi doi cho la: %d%d%d%d", tach_4, tach_3, tach_2, tach_1);

    return 0;

}
#include <stdio.h>

int main() 
{
    int so, doicho = 0, chuso;
    printf("Nhap vao so nguyen co bon chu so: ");
    scanf("%d", &so);
    printf("\n");

    if (so < 1000 || so > 9999) //Toan tu hoac
    {
        printf("Sai du lieu nhap vao, vui long chay lai chuong trinh!");
        return 1;
    }
    
    while (so != 0) 
    {
        chuso = so % 10; // Tach chu so cuoi cung
        doicho = doicho * 10 + chuso;  // Them vao so nghich dao
        so /= 10;   // Loai bo chu so cuoi cung

    }
    
    printf("Cac ki tu so sau khi doi cho la: %d", doicho);

    return 0;

}
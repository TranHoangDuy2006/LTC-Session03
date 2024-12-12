#include <stdio.h>

int main() 
{
    int so, tong, tach_1, tach_2, tach_3, tach_4;
    printf("\nNhap vao so nguyen n: ");
    scanf("%d", &so);
        
    printf("\n");
    
    tach_1 = so / 1000;
    tach_2 = so / 100 % 10;
    tach_3 = so / 10 % 10;
    tach_4 = so % 10;

    tong = tach_1 + tach_2 + tach_3 + tach_4;
   
    printf("Tong cua cac chu so la: %d", tong);

    return 0;

}
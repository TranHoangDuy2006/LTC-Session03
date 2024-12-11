#include <stdio.h>

int main() 
{
    int so, tong, chuso;
    
    do 
        {
            printf("\nNhap vao so nguyen n: ");
            scanf("%d", &so);
            printf("\n");

            if(so < 1000 && so > 9999)
                {
                    printf("Vui long nhap mot so co 4 chu so!\n");
                }
        }
    
    while(so < 1000 || so > 9999);
    
    while (so != 0) 
    {
        chuso = so % 10;
        tong += chuso; 
        so /= 10;  

    }
    
    printf("Tong cua cac chu so la: %d", tong);

    return 0;

}
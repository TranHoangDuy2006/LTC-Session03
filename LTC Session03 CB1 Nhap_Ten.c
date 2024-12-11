#include <stdio.h>

int main()
{
    
    char ten[20];
    printf("\nNhap ten cua ban: ");
    fgets(ten, 20, stdin);
    printf("\n");
    printf("Xin chao ban: %s !",ten);
    
    return 0;

}
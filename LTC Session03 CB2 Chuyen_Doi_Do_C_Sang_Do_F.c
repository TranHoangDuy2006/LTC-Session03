#include <stdio.h>

int main() {
    
    int do_C, do_F;

    printf("Nhap vao nhiet do C ban muon doi sang do F: ");
    
    scanf("%d", &do_C);

    do_F = do_C * 9 / 5 + 32;

    printf("%d do C khi chuyen sang Do F la: %d do F.\n", do_C, do_F);

    return 0;
}
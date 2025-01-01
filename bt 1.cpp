#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(input, sizeof(input), stdin); 
    input[strcspn(input, "\n")] = '\0';
    printf("Chuoi vua nhap: %s\n", input);
    printf("Ðo dai cua chuoi: %zu\n", strlen(input));

    return 0;
}


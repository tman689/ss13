#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "li xi cho em di"; 
    printf("Chuoi da khai bao: %s\n", input);
    printf("Cac ky tu trong chuoi: ");
    for (int i = 0; input[i] != '\0'; i++) {
        printf("%c ", input[i]); 
    }

    printf("\n");
    return 0;
}


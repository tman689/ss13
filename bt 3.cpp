#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "li xi cho em"; 
    int length = strlen(input);
    printf("Chuoi da khai bao: %s\n", input);
    printf("Chuoi dao nguoc: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", input[i]); 
    }
    printf("\n");
    return 0;
}


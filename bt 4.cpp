#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "li xi cho em di"; 
    char a;
    int count = 0;
    printf("Chuoi da khai bao: %s\n", input);
    printf("Nhap vao mot ky tu bat ky: ");
    scanf(" %c", &a); 
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == a) {
            count++; 
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", a, count);
    return 0;
}


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Li xi cho em di"; 
    int count = 0;
    int inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            inWord = 0;  
        } else if (inWord == 0) {
            inWord = 1;  
            count++;
        }
    }
    printf("So tu trong chuoi: %d\n", count);

    return 0;
}


#include <stdio.h>

int main() {
    char chr, eny, decy;
    int no;
    printf("Enter a character to encrypt: ");
    scanf("%c", &chr);
    printf("Enter the encryption key (integer): ");
    scanf("%d", &no);
    eny = chr ^ no;
    printf("Encrypted character: %c\n", eny);
    decy = eny ^ no;
    printf("Decrypted character: %c\n", decy);

    return 0;
}

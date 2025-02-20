#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\nCharacter: %c\n", ch);
    printf("isalnum: %d\n", isalnum(ch)); // Verifica se é alfanumérico
    printf("isalpha: %d\n", isalpha(ch)); // Verifica se é letra
    printf("isblank: %d\n", isblank(ch)); // Verifica espaço ou tab
    printf("iscntrl: %d\n", iscntrl(ch)); // Verifica caractere de controle
    printf("isdigit: %d\n", isdigit(ch)); // Verifica dígito (0-9)
    printf("isgraph: %d\n", isgraph(ch)); // Verifica se não é espaço e é imprimível
    printf("islower: %d\n", islower(ch)); // Verifica se é minúsculo
    printf("isprint: %d\n", isprint(ch)); // Verifica se é imprimível (inclui espaço)
    printf("ispunct: %d\n", ispunct(ch)); // Verifica se é pontuação
    printf("isspace: %d\n", isspace(ch)); // Verifica espaço em branco (espaço, tab, etc.)
    printf("isupper: %d\n", isupper(ch)); // Verifica se é maiúsculo
    printf("isxdigit: %d\n", isxdigit(ch)); // Verifica se é dígito hexadecimal (0-9, a-f, A-F)

    printf("\nTransformations:\n");
    printf("tolower: %c\n", tolower(ch)); // Converte para minúsculo
    printf("toupper: %c\n", toupper(ch)); // Converte para maiúsculo

    return 0;
}

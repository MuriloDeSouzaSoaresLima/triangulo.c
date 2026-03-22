#include <stdio.h>

int main() {
    float A, B, C;

    // Leitura dos lados
    printf("Digite o lado A (hipotenusa): ");
    scanf("%f", &A);

    printf("Digite o lado B: ");
    scanf("%f", &B);

    printf("Digite o lado C: ");
    scanf("%f", &C);

    // Verifica se forma triângulo
    if (A >= B + C) {
        printf("Nenhum triangulo e formado\n");
    } else {
        float A2 = A * A;
        float B2 = B * B;
        float C2 = C * C;

        if (A2 == B2 + C2) {
            printf("Triangulo retangulo\n");
        } else if (A2 > B2 + C2) {
            printf("Triangulo obtusangulo\n");
        } else {
            printf("Triangulo acutangulo\n");
        }
    }

    return 0;
}

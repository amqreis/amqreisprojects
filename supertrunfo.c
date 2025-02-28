#include <stdio.h>

typedef struct {
    char estado[50];
    int codigo;
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

void ler_carta(Carta *carta) {
    printf("Digite o estado: ");
    scanf(" %[^\n]", carta->estado);

    printf("Digite o código: ");
    scanf("%d", &carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->nome);

    printf("Digite a população: ");
    scanf("%lu", &carta->populacao);

    printf("Digite a área: ");
    scanf("%f", &carta->area);

    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
}

int main() {
    Carta minhaCarta;

    printf("Cadastro de carta do Super Trunfo:\n");
    ler_carta(&minhaCarta);

    printf("\nCarta cadastrada com sucesso!\n");
    printf("Estado: %s\n", minhaCarta.estado);
    printf("Código: %d\n", minhaCarta.codigo);
    printf("Cidade: %s\n", minhaCarta.nome);
    printf("População: %lu\n", minhaCarta.populacao);
    printf("Área: %.2f km²\n", minhaCarta.area);
    printf("PIB: %.2f bilhões\n", minhaCarta.pib);
    printf("Pontos turísticos: %d\n", minhaCarta.pontos_turisticos);

    return 0;
}

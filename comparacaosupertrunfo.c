#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para calcular atributos derivados
void calcularAtributos(Carta *c) {
    c->densidade_populacional = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
}

// Função para exibir informações da carta
void exibirCarta(Carta c) {
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s\n", c.nome);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f\n", c.pib);
    printf("Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade_populacional);
    printf("PIB per capita: %.2f\n", c.pib_per_capita);
}

// Função para comparar cartas
void compararCartas(Carta c1, Carta c2) {
    char atributo[] = "População"; // Defina aqui o atributo a ser comparado
    printf("Comparação de cartas (Atributo: %s):\n\n", atributo);
    printf("Carta 1 - %s (%s): %d\n", c1.nome, c1.estado, c1.populacao);
    printf("Carta 2 - %s (%s): %d\n", c2.nome, c2.estado, c2.populacao);
    
    if (c1.populacao > c2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome);
    } else if (c2.populacao > c1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome);
    } else {
        printf("Resultado: Empate!\n");
    }
}

int main() {
    // Definição das cartas
    Carta carta1 = {"São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 2200000000000, 10};
    Carta carta2 = {"Rio de Janeiro", "RJ01", "Rio de Janeiro", 6000000, 1200.27, 1400000000000, 8};
    
    // Calcular atributos derivados
    calcularAtributos(&carta1);
    calcularAtributos(&carta2);
    
    // Exibir as cartas
    printf("Carta 1:\n");
    exibirCarta(carta1);
    printf("\nCarta 2:\n");
    exibirCarta(carta2);
    
    printf("\n");
    
    // Comparar as cartas
    compararCartas(carta1, carta2);
    
    return 0;
}

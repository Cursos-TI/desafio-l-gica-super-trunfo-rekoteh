#include <stdio.h>
int main() {

    char opcao; 

    char Nome_Cidade1[50];
    char Estado1;
    char Codigo1[20];
    int Populacao1;
    int pontos_turisticos1;
    float Area1;
    float Pib1;
    float densidade_populacional1,PIB_per_Capita1;
    float super_poder1;    
    
    char Nome_Cidade2[67];
    char Estado2;
    char Codigo2[18];
    int Populacao2;
    int pontos_turisticos2;
    float Area2;
    float Pib2;
    float densidade_populacional2,PIB_per_Capita2;
    float super_poder2;

    // Entrada de dados para a Carta 1
    printf("---Informações Carta 1---\n");
    printf("Digite o nome da cidade: ");
    scanf(" %s", Nome_Cidade1);

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &Estado1);  

    printf("Digite o código da carta(formato ex: A01): ");
    scanf("%s", Codigo1);

    printf("Digite o número da população: ");
    scanf("%d", &Populacao1);

    printf("Qual é a área total da cidade? ");
    scanf("%f", &Area1);

    printf("Qual é o produto interno bruto? ");
    scanf("%f", &Pib1);

    printf("Quantos pontos turísticos possui esta cidade? ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = Populacao1 / Area1;
    PIB_per_Capita1 =  Populacao1 / Pib1;
    super_poder1 = (float) Populacao1 + Area1 + Pib1 + PIB_per_Capita1 + pontos_turisticos1 + (1/ densidade_populacional1);  
    

    // Entrada de dados para a Carta 2
    printf("\n---Informações Carta 2---\n");
    printf("Digite o nome da cidade: ");
    scanf(" %s", Nome_Cidade2);  

    printf("Digite uma letra de A a H: ");
    scanf(" %c", &Estado2); 

    printf("Digite o código da carta (formato ex: A01): ");
    scanf("%s", Codigo2);

    printf("Digite o número da população: ");
    scanf("%d", &Populacao2);

    printf("Qual é a área total da cidade? ");
    scanf("%f", &Area2);

    printf("Qual é o produto interno bruto? ");
    scanf("%f", &Pib2);

    printf("Quantos pontos turísticos possui esta cidade? ");
    scanf("%d", &pontos_turisticos2);
    
    densidade_populacional2 = Populacao2 / Area2;
    PIB_per_Capita2 =  Populacao2 / Pib2;
    super_poder2 = (float) Populacao2 + Area2 + Pib2 + PIB_per_Capita2 + pontos_turisticos2 + (1/ densidade_populacional2);

    printf("---Informações---\n");
    printf("Densidade Populacional: %.2f habitantes.\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais.\n", PIB_per_Capita1);
    printf("Densidade Populacional: %f habitantes.\n", densidade_populacional2);
    printf("PIB per Capita: %f reais.\n", PIB_per_Capita2);

    printf("Comparação de cartas (Atributo: Área)\n");
    printf("Carta 1- %s: %f\n" , Nome_Cidade1, Area1);
    printf("Carta 2- %s: %f\n" , Nome_Cidade2, Area2);

    if(Area1 > Area2){
       printf("Carta 1 venceu\n");
    } else {
        printf("Carta 2 venceu\n");

    }

    printf("---Menu---\n"
            "Área- A;\n"
            "Pib- B;\n"
            "Densidade Populacional- D\n;"
            "População- P;\n"
            "Pontos Turísticos- T.\n"
    );
    printf("Escolha qual atributo deseja ultilizar para a comparação:(A,B,D,P,T) ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'A':
        printf("Carta1 -Área: %.2f\n", Area1 );
        printf("Carta2 -Área: %.2f\n", Area2 );
        if(Area1 > Area2){
            printf("Carta 1 ganhou!\n");
        }else if(Area1 == Area2){
            printf("Empate!\n");
        }else{
            printf("Carta 2 ganhou!\n");
        }
        break;
        case 'B':
        printf("Carta1 -Pib %.2f\n", Pib1);
        printf("Carta2 - Pib: %.2f\n", Pib2 );
        if(Pib1 > Pib2){
            printf("Carta 1 ganhou!\n");
        }else if(Pib1 == Pib2){
            printf("Empate!\n");
        }else{
            printf("Carta 2 ganhou!\n");
        }
        break;
        case 'C':
        printf("Carta1 - Nome da cidade: %s", Nome_Cidade1);
        printf("Carta2 - Nome da cidade: %s", Nome_Cidade2 );
        break;
        case 'D':
        printf("Carta1 - Densidade Demógrafica: %.2f\n", densidade_populacional1 );
        printf("Carta 2 -  Densidade Demógrafica: %.2f\n", densidade_populacional2 );
        if(densidade_populacional1 < densidade_populacional2){
            printf("Carta 1 ganhou!\n");
        }else if(densidade_populacional1 == densidade_populacional2){
            printf("Empate!\n");
        } else{
            printf("Carta 2 ganhou!\n ");
        }
        break;
        case 'P':
        printf("Carta1 -População: %d\n", Populacao1);
        printf("Carta 2 - População: %d\n", Populacao2);
        if(Populacao1 > Populacao2){
            printf("Carta 1 ganhou!\n");
        }else if(Populacao1 == Populacao2){
            printf("Empate!\n");
        }else{
            printf("Carta 2 ganhou!\n");
        }
        break;
        case 'T':
        printf("Carta1 - Pontos Turísticos: %d\n", pontos_turisticos1 );
        printf("Carta2 - Pontos Turísticos: %d\n", pontos_turisticos2);
        if(pontos_turisticos1 > pontos_turisticos2){
            printf("Carta 1 ganhou!\n");
        }else if(pontos_turisticos1 == pontos_turisticos2){
            printf("Empate!\n");
        }else{
            printf("Carta 2 ganhou!\n");
        }
        break;
        default:
        printf("->Opção Inválida! Tente Novamente mais tarde!\n");
        break;
    }
    return 0;
}


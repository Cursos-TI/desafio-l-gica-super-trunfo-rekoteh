#include <stdio.h>
int main () {

    char atributos1, atributos2;
    char opcao1,opcao2; 
    float soma1,soma2;
    
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
    printf("---Comparação das Cidades---");
    printf("Menu para comparação de atributos específicos...");
    printf("---Menu---\n"
            "Área- A;\n"
            "Pib- B ou b;\n"
            "Densidade Demógrafica- D;\n"
            "População- P;\n"
            "Pontos Turísticos- T.\n"
    );
    printf("Escolha dois atributos: ");
    scanf(" %c %c", &opcao1, &opcao2);
    
    //Atributos 2
    switch (opcao1) {
        case 'A':
        case'a':
        printf("Area");
       atributos1 = Area1;
       atributos2 = Area2;
        break;
        case 'B':
        case'b':
        printf("Pib");
        atributos1 = Pib1;
        atributos2 = Pib2;
        break;
        case 'D':
        case'd':
        printf("Densidade Demógrafica");
        atributos1 = densidade_populacional1;
        atributos2 = densidade_populacional2;
        break;
        case 'P':
        case'p':
        printf("População");
        atributos1 =Populacao1;
        atributos2 = Populacao2;
        break;
        case 'T':
        case't':
        printf("Pontos Turísticos");
        atributos1 = pontos_turisticos1;
        atributos2 =pontos_turisticos2;        
        break; 
    }
    //Atributos 2
    switch (opcao2) {
        case 'A':
        case'a':
        printf("Area");
       atributos1 = Area1;
       atributos2 = Area2;
        break;
        case 'B':
        case'b':
        printf("Pib");
        atributos1 = Pib1;
        atributos2 = Pib2;
        break;
        case 'D':
        case'd':
        printf("Densidade Demógrafica");
        atributos1 = densidade_populacional1;
        atributos2 = densidade_populacional2;
        break;
        case 'P':
        case'p':
        printf("População");
        atributos1 =Populacao1;
        atributos2 = Populacao2;
        break;
        case 'T':
        case't':
        printf("Pontos Turísticos");
        atributos1 = pontos_turisticos1;
        atributos2 =pontos_turisticos2;        
        break; 
    }
    //Soma dos valores
     soma1 = atributos1 +atributos2;
     soma2 = atributos1 +atributos2;
    printf("---Soma da cidade 1---");
     printf("%s:\n", Nome_Cidade1);
     printf("A soma dos atributos1: %f", soma1);
     printf("A soma dos atributos2: %f", soma2);
     printf("---Soma da cidade 2---");
     printf("%s:\n", Nome_Cidade2);
     printf("A soma dos atributos1: %f", soma1);
     printf("A soma dos atributos2: %f", soma2);

     //Determinar Valores
     if(soma1 > soma2) {
        printf("O atributo 1 da cidade %s ganhou!", Nome_Cidade1);
    } else if(soma1 < soma2){
        printf("O atributo 2 da cidade %s ganhou!",  Nome_Cidade2);
    }

    return 0;
}


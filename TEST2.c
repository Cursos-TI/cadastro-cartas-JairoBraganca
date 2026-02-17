#include <stdio.h>

int main(){

    int ecolhaUsuario1, ecolhaUsuario2;



    printf("\n** Escolha Uma Opção**\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Numero de Pontos Turistico\n");
    printf("5. Densidade Demografica\n");
    printf("6. SUPER PODER\n");
    printf("Entre Com um numero: ");
    scanf("%d", &ecolhaUsuario1);

    if( ecolhaUsuario1 == 1 )
    {
        printf("\n** Escolha Uma Opção**\n");
        printf("2. Área\n");
        printf("3. Pib\n");
        printf("4. Numero de Pontos Turistico\n");
        printf("5. Densidade Demografica\n");
        printf("6. SUPER PODER\n");
        printf("Entre Com um numero: ");
        scanf("%d", &ecolhaUsuario2);
    }else if( ecolhaUsuario1 == 2)
    {
        printf("\n** Escolha Uma Opção**\n");
        printf("1. População\n");
        printf("3. Pib\n");
        printf("4. Numero de Pontos Turistico\n");
        printf("5. Densidade Demografica\n");
        printf("6. SUPER PODER\n");
        printf("Entre Com um numero: ");
    }else if( ecolhaUsuario1 == 3)
    {
        printf("\n** Escolha Uma Opção**\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("4. Numero de Pontos Turistico\n");
        printf("5. Densidade Demografica\n");
        printf("6. SUPER PODER\n");
    printf("Entre Com um numero: ");
    }else if( ecolhaUsuario1 == 4)
    {    
        printf("\n** Escolha Uma Opção**\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Pib\n");
        printf("5. Densidade Demografica\n");
        printf("6. SUPER PODER\n");
        printf("Entre Com um numero: ");
    }else if( ecolhaUsuario1 == 5)
    {
        printf("\n** Escolha Uma Opção**\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Pib\n");
        printf("4. Numero de Pontos Turistico\n");
        printf("6. SUPER PODER\n");
        printf("Entre Com um numero: ");
    }else if( ecolhaUsuario1 == 6)
    {
        printf("\n** Escolha Uma Opção**\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Pib\n");
        printf("4. Numero de Pontos Turistico\n");
        printf("5. Densidade Demografica\n");
        printf("Entre Com um numero: ");
    }

        switch (ecolhaUsuario1)
    {
    case 1:
        printf("Case 1A\n");
        break;
    
    case 2:
        printf("Case 2A\n");
        break;
    
    case 3:
        printf("Case 3A\n");
        break;
    
    case 4:
        printf("Case 4A\n");
        break;
    
    case 5:
        printf("Case 5A\n");
        break;
    
    case 6:
        printf("Case 6A\n");
        break;
    
    default:
        break;
    }


    switch (ecolhaUsuario2)
    {
    case 1:
        printf("Case 1B\n");
        break;
    
    case 2:
        printf("Case 2B\n");
        break;
    
    case 3:
        printf("Case 3B\n");
        break;
    
    case 4:
        printf("Case 4B\n");
        break;
    
    case 5:
        printf("Case 5B\n");
        break;
    
    case 6:
        printf("Case 6B\n");
        break;
    
    default:
        break;
    }

    return 0;
}
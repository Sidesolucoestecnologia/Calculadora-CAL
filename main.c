
 

#include <stdio.h> 

#include <stdlib.h> 

#include <locale.h> 

  

int op,resul; 

float n1; 

float n2; 

  

int main() { 

   

     

    do { 

        // Exibindo nome do sistema de forma interativa  

        printf("-----------------------------Bem-vindo ao sistema cal-------------------------------\n"); 

     // Mensagem para usuário escolher opção das operações. 

  printf("((((((((((((((((((((((((((((((((((Escolha opcão))))))))))))))))))))))))))))))))))))\n"); 

// mensagem dando opções de operações que o sistema calcula. 

        printf("1 + somar:\n"); 

        printf("2 - subtração:\n"); 

        printf("3 * multiplicação:\n"); 

        printf("4 / divisão:\n"); 

//opção para encerrar o sistema pois sistema está comando while dentro de uma estrutura de repetição.     

   printf("5    Encerrar sistema:\n"); 

// Armazenando o tipo de operação selecionada.       

 scanf("%d", &op); 

  

        if (op == 5) { 

            printf("Programa encerrado...\n"); 

            break; 

        } 

 //Obtendo o valor do primeiro número inteiro fornecido pelo usuário. 

        printf("Digite o primeiro número:\n"); 

        scanf("%f", &n1); 

 

 //Obtendo o valor do segundo número inteiro fornecido pelo usuário. 

        printf("Digite o segundo número:\n"); 

        scanf("%f", &n2); 

  

        // Verifica a operação escolhida e realiza o cálculo. 

        if (op == 1) { // Se opção escolhida for 1 vai ser soma. 

            resul = n1 + n2;  

//Mensagem dando resultado para usario. 

            printf("Resultado da soma: %.2d\n", resul); 

        } else if (op == 2) { // Se opção escolhida for 2 vai ser subtração. 

 

            resul = n1 - n2; 

//Mensagem dando resultado para usario. 

            printf("Resultado da subtração: %.2d\n", resul); 

        } else if (op == 3) {// Se opção escolhida for 3 vai ser multiplicação. 

 

            resul = n1 * n2; 

//Mensagem dando resultado para usario. 

            printf("Resultado da multiplicação: %.2d\n", resul); 

        } else if (op == 4) {// Se opção escolhida for 4 vai ser divisão. 

 

            if (n2 != 0) { // Divisão por zero não é permitida. 

 

                resul = n1 / n2; 

                printf("Resultado da divisão: %.2d\n", resul); 

            } else { 

//Mensagem quando usuário tenta dividir algum cálculo por 0.               

  printf("Erro: Divisão por zero não é permitida.\n"); 

            } 

        } else { 

            printf("Essa opção é inválida.\n"); 

        } 

  

        printf("\n");   

//Sistema está comando while dentro de uma estrutura de repetição. 

    } while (op != 5); 

  

    return 0; 

} 

 

 
#include <stdio.h>
// CACULADORA DA ATIVIDADE DE PRODUÇÃO, ELABORADA DA SEGUINTE FORMA
// PRIMEIRAMENTE, PRIMEIRO SE COLOCA OS VALORES E EM SEGUIDA FAÇA A ESCOLHA DA
// OPERAÇÃO QUE DESEJA FAZER, LEMBRANDO QUE TEM A OPÇÃO DO NUMERO 1 AO 6 COM AS
// OPERAÇÕES PRE DETERMINADA PELO ENUNCIADO DO TRABALHO, CABE RESALTAR QUE PARA
// A POTENCIA O VALOR NUMERO 2 SEMPRE É O VALOR A SER ELEVADO, É DE SUMA
// IMPORTANCIA RESALTAR CASO DIGITE O NUMERO DA OPERAÇÃO EQUIVOCADAMENTE VAI
// APARECER UMA MENSAGEM DE ERRO, TODA CALCULADORA FOI DESENVOLVIDA COM BASE NAS
// APOSTILAS APRESENTADA PELO CURSO DA UNIVERSIDADE LA SALLE. USUARIO GITHUB
// (FDMGJOAO)

int main(void) {
  float num1 = 0, num2 = 0, resultado = 0;
  int op;

  printf("João Vitor Ribeiro\n");
  printf("Analise e desenvolimento de sistemas\n");
  printf("Universidade LA SALLE\nMatricula: 202220807\n");
  printf("Calculadora\n");
  do {
    printf("\nDigite 1º valor: ");
    scanf("%f", &num1);
    printf("\nDigite o 2º valor: ");
    scanf("%f", &num2);
    printf(
        "Digite a operção desejada\n\t1 - SOMA\n\t2 - SUBTRACAO\n\t3 - "
        "MULTIPLICACAO\n\t4 - DIVISAO\n\t5 - RAIZ QUADRADA\n\t6 - POTENCIA\n");
    scanf("%i", &op);

    switch (op) {
    case 1:
      resultado = num1 + num2;
      break;
    case 2:
      resultado = num1 - num2;
      break;
    case 3:
      resultado = num1 * num2;
      break;
    case 4:
      resultado = num1 / num2;
      break;
    case 5:
      resultado = sqrt(num1);
      resultado = sqrt(num2);
      break;
    case 6:
      resultado = pow(num1, num2);
      break;
    default:
      printf("\n Digitie uma opção valida\n");
      break;
    }
    printf("\n\t O resultado é: %0.2f", resultado);
    printf("\n Digite 1 para continuar: ");
    scanf("%i", &op);

  } while (op == 1);

  return 0;
}
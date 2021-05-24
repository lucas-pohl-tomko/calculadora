#include <stdio.h>

double calculaConversao(double valor,double conversao){
  double convertido = valor * conversao;
  return convertido;
}
double calculaTaxa(double valor, double taxa){
  double taxaCobrada;
  return taxaCobrada = valor * taxa;
}

// FUNCAO DE MENU QUE VAI CHAMAR AS OUTRAS
void menu(char moedas[]){
  double valor,conversao;
  int selecao1,selecao2;

  printf("Primeira moeda a ser convertida \n");
  printf("insira um dos seguintes numeros para representar a moeda, 0:Real(R), 1:Dolar(D), 2:dolar Australiano(A), 3: dolar Canadense(C) \n");

  scanf("%d", &selecao1);

  printf("Segunda moeda a ser convertida \n");
  printf("insira um dos seguintes numeros para representar a moeda, 0:Real(R), 1:Dolar(D), 2:dolar Australiano(A), 3: dolar Canadense(C) \n");

  scanf("%d",&selecao2);

  printf("\nvalor a ser convertido: ");
  scanf("%lf",&valor);
  printf("valor de conversao: ");
  scanf("%lf",&conversao);

  double calculoDaConversao = calculaConversao(valor, conversao);
  printf("\nO valor %lf %c foi convertido para %lf %c",valor,moedas[selecao1], calculoDaConversao, moedas[selecao2]);
  printf("\n taxa cobrada: %lf %c \n",calculaTaxa(calculoDaConversao, 0.1), moedas[selecao2]);
} 

int main(void) {
  //R é real e D é dolar
  char moedas[] = {'R', 'D', 'A', 'C', '\0'};
  menu(moedas);
  return 0;
}
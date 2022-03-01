#include <stdio.h>

int main() {
  int mes, dia;
  char diasDaSemana[7][13] = {
    "Domingo",
    "Segunda-feira",
    "Terca-feira",
    "Quarta-feira",
    "Quinta-feira",
    "Sexta-feira",
    "Sabado"
  };  
  int diasNoMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  do {
    printf("Qual dia começa o mês? (1 = Domingo, 2 = Segunda, 3 = Terca...)");
    scanf("%d", &dia);
  } while(dia > 7 || dia < 1);

  do {
    printf("Qual mês você deseja? (1 = Janeiro, 2 = Fevereiro, 3 = Março...)");
    scanf("%d", &mes);
  } while(mes > 12 || mes < 1);
  
  int diasNoMesEscolhido = diasNoMes[mes-1];

  printf("\nDia em que começa: %s \t Numero de dias no mês: %d \n", diasDaSemana[dia-1], diasNoMesEscolhido);
  printf("------------------------------------------------------------- \n\t");

  for(int i = 0; i < 7; i++) {
    printf("%c \t\t", diasDaSemana[i][0]);
  }
  printf("\n\t");

  for (int i = 0; i < dia-1; i++) {
    printf("  \t\t");
  }

  for(int i = 1; i <= diasNoMesEscolhido; i++) {    
   printf("%d \t\t", i);
    
    if ((i+dia-1)%7 == 0) {
      printf("\n\t");
    }
  }  
}
  
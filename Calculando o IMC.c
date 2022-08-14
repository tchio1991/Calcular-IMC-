// O Indice de Massa Corporal (IMC) e uma formula que indica se um adulto
// esta acima do peso, se esta obeso ou abaixo do peso ideal considerado
// saudavel. A formula para calcular o Indice de Massa Corporal e:
// IMC = peso / (altura * altura)
// 
// A Organizacao Mundial de Saude usa um criterio simples para considerar
// quem esta acima do peso e quem e obeso:
// IMC calculado   Situacao
// Menos de 20     Abaixo do peso
// 20 <= IMC < 25  Peso Normal
// 25 <= IMC < 30  Acima do peso
// 30 <= IMC < 34  Obeso
// Acima de 34     Muito Obeso
//
// Desenvolva um programa que leia o peso (em kg, tipo int) e
// altura (em metros, tipo float) e em seguida calcule o IMC e
// mostre qual a situacao do adulto de acordo com a tabela acima.

#include <stdio.h>

void main() {
  int peso;
  float altura, imc;

  printf("Informe o peso (em kgs):\n");
  scanf("%d", &peso);

  printf("\nInforme a altura (em metros):\n");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("\n\nIMC = peso / (altura * altura)");
  printf("\n\nIMC calculado   Situacao");
  printf("\n------------------------------");
  printf("\nMenos de 20     Abaixo do peso");
  printf("\n20 <= IMC < 25  Peso Normal");
  printf("\n25 <= IMC < 30  Acima do peso");
  printf("\n30 <= IMC < 34  Obeso");
  printf("\nAcima de 34     Muito Obeso");
  printf("\n------------------------------");
  printf("\nIMC = %.2f", imc);
  if (imc < 20)
     printf(" (abaixo do peso).");
  else if ((imc >= 20) && (imc < 25))
          printf(" (peso normal).");
       else if ((imc >= 25) && (imc < 30))
               printf(" (acima do peso).");
            else if ((imc >= 30) && (imc < 34))
                    printf(" (obeso).");
		 else
		    printf(" (muito obeso).");
}

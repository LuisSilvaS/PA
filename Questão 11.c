#include <stdio.h>

/*int main(void) {

float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

aloha[2] = value/*scanf("%f", &aloha);
aloha = value;
printf("%f", aloha);
coisas[4][4] = aloha[3];
coisas[5] = aloha;
pf = value;
pf = aloha;

}


aloha[2] = value;
válido. Atribui o valor da variável value ao terceiro elemento (índice 2) do array aloha.
scanf("%f", &aloha);
inválido. A função scanf espera um ponteiro para uma variável float, mas &aloha é um ponteiro para um array de floats. Você deve especificar um elemento específico do array para a entrada.
aloha = value;

inválido. Você não pode atribuir um valor único (float) a um array inteiro.
printf("%f", aloha);

inválido. Você está tentando imprimir um array inteiro com o formato de float. Você deve especificar um elemento específico do array para a saída.
coisas[4][4] = aloha[3];

válido. Atribui o valor do quarto elemento (índice 3) do array aloha à posição [4][4] do array bidimensional coisas.
coisas[5] = aloha;

inválido. Você está tentando atribuir um array unidimensional (aloha) a uma posição de um array bidimensional (coisas). Isso não é permitido.
pf = value;

inválido. Você está tentando atribuir um valor float a um ponteiro para float. Isso é válido apenas se você usar o operador de endereço & para obter o endereço de value.
pf = aloha;

válido, mas com um possível aviso ou erro de compilação. O ponteiro pf é do tipo float *, enquanto aloha é um array de floats. Você pode atribuir o endereço do primeiro elemento de aloha a pf, mas é importante lembrar que os tipos são diferentes, e isso pode causar problemas de interpretação de tipos em tempo de execução.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n, i;
 printf("Digite o tamanho do vetor fixo: ");
 scanf("%d", &n);
 int v[n];

 for (i = 0; i < n; i++) v[i] = i;
 for (i = 0; i < n; i++) printf("%d\n", v[i]);
 /*
  Memória Stack:

  O programa anterior será encerrado com o erro (Segmentation fault) se for usado
  um valor de n maior que 2000000. Isso ocorre porque o SO limita o tamanho da pilha
  a 8MB. Se o vetor for maior que isso, o programa não conseguirá alocar memória
  para ele e o erro ocorrerá.

  Memória Heap:

  Este limite não existe para a memória heap (Com exceção do limite de memória do computador).
  O programa abaixo funciona normalmente para qualquer valor de n.
 */

 printf("Digite o tamanho do vetor dinâmico: ");
 scanf("%d", &n);
 int *v2 = (int*) malloc(n * sizeof(int));

 for (i = 0; i < n; i++) v2[i] = i;
 for (i = 0; i < n; i++) printf("%d\n", v2[i]);

 free(v2);

 char nome[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
 sprintf(nome, "Melancia");
 printf("%c\n", nome[0]);
 printf("%s\n", nome);

 //unsigned char n = 250;
 unsigned int n = 250;
 //char n = 120;

 for (int i = 0; i < 10; i++) {
  //printf("%hhu | %hhX\n", n, n);
  //printf("%hhd | %hhX\n", n, n);
  printf("%u | %X\n", n, n);
  n++;
 }

 return 0;
}

#include <stdio.h> 
#include <stdlib.h>
#include "util.h"

int main(void) {
  FILE *procurador;
  char nomeArquivo[200];
  
  //abrir arquivo
  printf("Nome do arquivo?");
  scanf("%s", nomeArquivo);
  procurador = fopen(nomeArquivo,"r");
  if(procurador == NULL){
    printf("nao localizado");
  return 0;
  }   
  
  //alocar o vetor com quantidade de dados glicemicos
  int *vetor;
  int contaLinhas = 0;
  char linha[250];
  do{
    fgets(linha,250,procurador);
    contaLinhas++;
  } while(!feof(procurador));
  printf("\nTotal de linhas no arquivo: %d\n", contaLinhas);
  vetor = (int *)malloc(sizeof(int) * contaLinhas);
  
  //popular vetor
  int i = 0;
  do{
    fgets(linha,250,procurador);
    vetor[i] = atoi(linha);
    i++;
  }  while(!feof(procurador));
  
  
  //calcular estatisticas 
  //media
  printf("\nA media e: %.2f\n", calcularMedia(vetor, contaLinhas));

  
  //minimo
  //maximo
  //exibirResultado
  return 0;
}



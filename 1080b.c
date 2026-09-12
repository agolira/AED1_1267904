/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Thiago Barreto Guedes de Castro Lira Junior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 20/08/2026
Objetivo    : Ler 100 valores e identificar o maior valor lido e a posicao
              que se encontra o numero. E fazer a alocacao dinamica de memoria de um vetor.
Dificuldade : o principal desafio neste problema e encontra o maior valor lido
              e sua posicao.
Uso de IA   : nao
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //alocacao dinamica de memoria do vetor.
    int *v;
    v = malloc(100 * sizeof(int));
    //declarando variaveis
    int pos = 0;
    //lendo todos os valores informados
    for(int i = 0;i<100;i++){
        scanf("%d",&v[i]);
    }
    int maior = v[0];
    //encontrando o maior valor lido e a sua pos
    for(int i = 0;i<100;i++){
        if(maior<v[i]){
            maior=v[i];
            pos = i;
        }
    }
    printf("%d\n%d\n",maior,pos);
    return 0;
}

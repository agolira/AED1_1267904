/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Thiago Barreto Guedes de Castro Lira Junior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 20/08/2026
Objetivo    : Ler 100 valores e identificar o maior valor lido e a posicao 
              que se encontra o numero.
Dificuldade : o principal desafio neste problema e encontra o maior valor lido
              e sua posicao.
Uso de IA   : nao
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    //declarando as variaveis e o vetor
    int v[100];
    int pos = 0;
    int maior = v[0];
    //lendo todos os valores informados
    for(int i = 0;i<100;i++){
        scanf("%d",&v[i]);
    }
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
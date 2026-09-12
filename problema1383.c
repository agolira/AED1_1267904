/* --------------------------------------------------------------------------
Disciplina  : Algortimo e Estrutura de Dados 2026S1
Nome        : Thiago Barreto Guedes de Castro Lira Junior
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 20/08/2026
Objetivo    : responder se a matriz e solucao do sudoku ou nao.
Dificuldade : o principal desafio neste problema e analisar as matrizes 3x3.
Uso de IA   : apenas para verificar se a logica esta certa e estudar maneiras melhores de fazer a mesma coisa.
-------------------------------------------------------------------------- */

#include <stdio.h>

int verRepetido(int x,int y,int matriz[9][9]){
    //declarando variaveis
    int i = x - 3;
    int j = y - 3;

    int j_base = j;

     //analisando as matrizes 3x3
    for(; i < x ; i++){
        for(int j_inicial = j_base; j_inicial < y ; j_inicial++){
            for(int k = i ; k < x ; k++){
                for(int m = (k == i) ? j_inicial + 1 : j_base ; m< y ; m++){
                    if(matriz[i][j_inicial] == matriz[k][m]){
                        return 0;
                    }
                }
            }
        }
    }  
    return 1;
}



int main(){
    //declaracao de variaveis
    int sudoku[9][9];
    int n;
    //le a quantidade de matrizes a serem testadas
    if(scanf("%d",&n) != 1) return 0;

    for(int k_instancia = 1; k_instancia <= n; k_instancia++){
        //variavel local  
        int ver = 1;
        //apresentando valores ao sudoku
        for(int i = 0; i < 9;i++){
            for(int j = 0; j < 9; j++){
                scanf("%d",&sudoku[i][j]);
            }
        }
        //verificando matriz 9x9
        for(int i = 0;i<9;i++){
            for(int k = 0;k<9;k++){
            int aux = sudoku[i][k];
                for(int j = k + 1; j < 9 ; j++){
                    if(aux == sudoku[i][j]){
                        ver = 0;
                    }
                }    
            }
        }
        for(int j = 0;j<9;j++){
            for(int k = 0;k<9;k++){
            int aux = sudoku[k][j];
                for(int i = k + 1 ;i<9;i++){
                    if(aux == sudoku[i][j]){
                        ver = 0;
                    }
                }
            }
        }
        //verificando resultado
        printf("Instancia %d\n",k_instancia);
        if(ver == 1){
            if(verRepetido(3,3,sudoku) == 1 && verRepetido(3,6,sudoku) == 1 && verRepetido(3,9,sudoku) == 1  && verRepetido(6,3,sudoku) == 1 && verRepetido(6,6,sudoku) == 1 && verRepetido(6,9,sudoku) == 1 && verRepetido(9,3,sudoku) == 1 && verRepetido(9,6,sudoku) == 1 && verRepetido(9,9,sudoku) == 1){
                printf("SIM\n");
            }else{
                printf("NAO\n");
            }
        }else{
            printf("NAO\n");
        }
        printf("\n");
    }
    return 0;
}

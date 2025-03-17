#include <stdio.h>

int main (){

//Torre: Deverá simular o movimento da Torre 5 casas para a direita.
printf("Movimento da Torre:\n");

for (int i = 0; i < 5; i++){
    printf ("Torre: Direita! \n");
}

printf ("\n");

//Bispo: Movimento do Bispo, 5 casas na diagonal para cima e à direita.
printf("Movimento do Bispo:\n");

int movimentoBispo = 0;
while (movimentoBispo < 5){
    printf ("Bispo: Cima, Direita! \n");
    movimentoBispo++;
}

printf ("\n");

//Rainha:  movimento da Rainha 8 casas para a esquerda.
printf("Movimento da Rainha:\n");
    int movimentoRainha = 0;
    do {
        printf("Rainha: Esquerda! \n");
        movimentoRainha++;
    } while (movimentoRainha < 8);
 


return 0;

}
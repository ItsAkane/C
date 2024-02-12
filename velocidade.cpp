#include <cstdio>
#include <cstdlib>

int main(){
    int velvia,velveiculo, perdeu, multamedia, multagrave;

    printf("digite a velocidade da via: ");
    scanf("%d", &velvia);
    printf("digite a velocidade do veículo: ");
    scanf("%d", &velveiculo);
    perdeu = (velvia * 1.50);
    multamedia = (velvia * 1.00);
    multagrave = (velvia * 1.20);


    if (velveiculo > perdeu){
        printf("voce perdeu a sua carteira!");
    }else if(velveiculo >= multamedia && velveiculo < multagrave){
        printf("voce recebeu uma multa media.");
    }else if(velveiculo >= multagrave && velveiculo < perdeu){
        printf("voce recebeu uma multa grave.");
    }else{
        printf("dentro da velocidade permitida.");
    }

//    printf("%d, %d", velveiculo, velvia);

}
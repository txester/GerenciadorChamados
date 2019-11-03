#include<stdio.h>
#include<stdlib.h>

int menu = -1;

void menuCliente(){ //EVITAR REPETI플O DE CONDIGO.
    printf("Menu>1 Cliente\n");
    printf("---------------------\n");
    printf("1-Criar chamados\n");
    printf("2-Acompanhar chamados\n");
    printf("3-Remover Chamados\n");
    printf("4-Voltar\n");
    printf("0-Sair\n");

    int menucliente = -1;
    printf("Selecione Um Menu\n");
    scanf("%i",&menucliente);

    system ("cls")


    switch(menucliente){


    case 1:
        criarChamados();
        break;
    case 2:
        acompanharChamados();
        break;

    case 3:
        printf("3 - removerChamados");
        break;

    case 4:
        menu = -1;
        break;

    case 0:
        menu = 0;
        break

            default:
    }




};

void menuGerente(){
    printf("Menu>2 Gerente\n");
    printf("---------------------\n");
    printf("1- Acompanhar chamados\n");
    printf("2-Alterar chamados\n");
    printf("3-Agendar Visita Tecnica\n");
    printf("Relatorios\n");
    printf("4-Voltar\n");
    printf("0-Sair\n");

    int menugerente = -1;
    printf("Selecione Um Menu\n");
    scanf("%i",&menugerente);

    system ("cls")





};

void menuPrincipal(){
    printf("Menu\n");
    printf("---------------------\n");
    printf("1-Cliente\n");
    printf("2-Gerente\n");
    printf("0-Sair\n");

    printf("\nSelecione O Menu: ");
    scanf("%i",&menu);



};

int main(){

    while(menu!=0){//FUN플O DE REPETI플O QUE REPESENTA O FLUXO PRINCIPAL DO PROGRAMA.

        switch(menu){
            case 1:
                menuCliente();
                break;
            case 2:
                menuGerente();
                break;
            default:
               menuPrincipal();
        }



        system("cls");//FUN플O DO SISTEMA PARA LIMPAR TELA.

    }

    return 0;

}

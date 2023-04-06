#include <stdio.h>

int receita(int saldo, int valor){
    return saldo - valor;
int despesa(int saldo, int valor){
    return saldo + valor;
    }

int main(void)
{
    struct{
        float numproj;
        int saldo;
        int valor;
        int escolha;
        int receita;
        int despesa;
    }func;

printf("\n\nDigite o numero do projeto: ");
scanf("%f", &func.numproj);

printf("\n\nDigite seu saldo: ");
scanf("%d", &func.saldo);

printf("\n\n Digite 1 para receita, 2 para despesa:");
scanf("%d", &func.escolha);
    
    if (func.escolha == 1) {
        printf("Digite o valor da receita: ");
        scanf("%d", &func.receita);
        func.saldo = receita(func.receita, func.saldo);
        printf("Saldo atual:%d", &func.saldo);
    }
    else if(func.escolha = 2) {
        printf("Digite o valor da despesa: ");
        scanf("%d", &func.despesa);
        func.saldo = despesa(func.despesa, func.saldo);
        printf("Saldo atual: %d", &func.saldo);
    }
    else{
        printf("Opção invalida!");
    }
   
   
  
   return 0; 

}

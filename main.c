#include <stdio.h>
#include "tarefas.h"

int main(){
  int pos = 0;
  Tarefa tarefas[TOTAL];

  int e = carregarTarefas(tarefas, TOTAL, &pos);
  if(e != 0)
    pos = 0;
  
  int opcao;
  do{
  printf("\nMenu principal\n");
  printf("1-Criar tarefa\n");
  printf("2-Deletar tarefa\n");
  printf("3-Listar tarefas\n");
  printf("0-Sair\n");
    printf("Entre com uma opção: ");
    int i = scanf("%d", &opcao);
    printf("Opção escolhida: %d\n", opcao);
    
    if(opcao == 1){
      int erro = criarTarefa(tarefas, &pos);
    }else if (opcao == 2){
      int erro = deletarTarefa(tarefas, &pos);
    }else if (opcao == 3){
      int erro = listarTarefas(tarefas, pos);
    }else if (opcao == 0){
      printf("Sair\n");
      salvarTarefas(tarefas, TOTAL, pos);
    }
    else{
      printf("Opção inválida\n");
    }
    
  }while(opcao != 0);
}

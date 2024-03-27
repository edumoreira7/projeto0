#include <stdio.h>
#include "tarefas.h"

int main(){
  int pos = 0;
  Tarefa tarefas[TOTAL];

  Erro e = carregarTarefas(tarefas, TOTAL, &pos);
  if(e == ABRIR){
    printf("erro ao abrir arquivo");
    pos = 0;
  }
  else if (e == FECHAR){
    printf("erro ao fechar arquivo");
    pos = 0;
  }
  else if (e == LER){
    printf("erro ao ler arquivo");
    pos = 0;
  }
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
      e  = criarTarefa(tarefas, &pos);
      if(e == MAX_TAREFAS)
        printf("Maximo de tarefas alcançados\n");
    }else if (opcao == 2){
      e  = deletarTarefa(tarefas, &pos);
      if(e == SEM_TAREFAS)
        printf("Não há tarefas para deletar!\n");
      else if (e == NAO_EXISTE)
        printf("Tarefa não existe!\n");
    }else if (opcao == 3){
      e  = listarTarefas(tarefas, pos);
      if(e == SEM_TAREFAS)
        printf("Não há tarefas para listar!\n");
    }else if (opcao == 0){
      printf("Sair\n");
      e = salvarTarefas(tarefas, TOTAL, pos);
      if(e == ABRIR)
        printf("erro ao abrir arquivo");
      else if(e == FECHAR)
        printf("erro ao fechar arquivo");
      else if(e==ESCREVER)
        printf("erro ao escrever arquivo");
    }
    else{
      printf("Opção inválida\n");
    }
    
  }while(opcao != 0);
}

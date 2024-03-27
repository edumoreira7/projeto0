#define TOTAL 100

typedef struct Tarefa {
  int prioridade;
  char descricao[300];
  char categoria[100];
} Tarefa;

typedef enum Erros {OK, MAX_TAREFAS, SEM_TAREFAS, NAO_EXISTE, ABRIR, FECHAR, ESCREVER, LER} Erro;


Erro criarTarefa(Tarefa tarefas[], int *pos);
Erro deletarTarefa(Tarefa tarefas[], int *pos);
Erro listarTarefas(Tarefa tarefas[], int pos);
Erro salvarTarefas(Tarefa tarefas[], int total, int pos);
Erro carregarTarefas(Tarefa tarefas[], int total, int *pos);
void clearBuffer();
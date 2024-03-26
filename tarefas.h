#define TOTAL 100

typedef struct Tarefa {
  int prioridade;
  char descricao[300];
  char categoria[100];
} Tarefa;

int criarTarefa(Tarefa tarefas[], int *pos);
int deletarTarefa(Tarefa tarefas[], int *pos);
int listarTarefas(Tarefa tarefas[], int pos);
int salvarTarefas(Tarefa tarefas[], int total, int pos);
int carregarTarefas(Tarefa tarefas[], int total, int *pos);
void clearBuffer();
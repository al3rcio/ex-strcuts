#include <stdio.h>
#include <stdlib.h>

#define TURMA 2
#define STR 20

typedef struct
{
   int nota1;
   int nota2;
   int nota3;
} notas;

typedef struct 
{
    char nome[STR];
    int matricula;
    notas nota;
} aluno;

void InsereDados();
void ImprimeDados();
aluno BuscaMatricula(int numeroMatricula);
void InsereNotas();
float CalculaMedia(notas notas);
aluno BuscaMatricula(int numeroMatricula);

aluno turma[TURMA]; 

int main()
{
    InsereDados();
    printf("********\n");
    ImprimeDados();
    InsereNotas();
    return 0;
}

void InsereDados()
{
    for (int i = 0; i < TURMA; i++)
    {
        printf("Insira o nome do aluno: ");
        scanf("%s", turma[i].nome);
        printf("Insira o número de matrícula: ");
        scanf("%i", &turma[i].matricula);
    }
}

void ImprimeDados()
{
    for (int i = 0; i < TURMA; i++)
    {
        printf("Nome: %s\n", turma[i].nome);
        printf("Matrícula: %i\n", turma[i].matricula);
    }
}

void InsereNotas()
{     
    for (int i = 0; i < TURMA; i++)
    {
        printf("Informe as notas 1, 2 e 3 do aluno %s\n", turma[i].nome);
        printf("Nota 1: ");
        scanf("%i", &turma[i].nota.nota1);
        printf("Nota 2: ");
        scanf("%i", &turma[i].nota.nota2);
        printf("Nota 3: ");
        scanf("%i", &turma[i].nota.nota3);
    }    
}

float CalculaMedia(notas notas)
{
    float media;
    

    return media;
}

aluno BuscaMatricula(int numeroMatricula)
{
    aluno dadosAluno;

    // TODO

    return dadosAluno;
}
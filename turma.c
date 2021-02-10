#include <stdio.h>
#include <stdlib.h>

#define TURMA 20
#define STR 20
#define TOTAL 3

typedef struct
{
   float nota1;
   float nota2;
   float nota3;
   float media;
} notas;

typedef struct 
{
    char nome[STR];
    int matricula;
    notas nota;
} aluno;

// declarando funções
void InsereDados();
void ImprimeDados();
aluno BuscaMatricula(int numeroMatricula);
void InsereNotas();
float CalculaMediaAluno(aluno notas[], int tamanhoTurma);
void ImprimeMediaAluno(aluno notas[], int tamanhoTurma);
float CalulaMediaTurma(aluno media[], int tamanhoTurma);
aluno BuscaMatricula(int numeroMatricula);


aluno turma[TURMA]; 

int main()
{
    InsereDados();
    printf("********\n");
    ImprimeDados();
    InsereNotas();
    CalculaMediaAluno(turma, TURMA);
    ImprimeMediaAluno(turma, TURMA);
    printf("********\n");
    float mediaTurma = CalulaMediaTurma(turma, TURMA);
    printf("A média da turma é %.2f\n", mediaTurma);
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
    printf("#### INSIRA AS NOTAS ####\n");     
    for (int i = 0; i < TURMA; i++)
    {
        printf("Informe as notas 1, 2 e 3 do aluno %s\n", turma[i].nome);
        printf("Nota 1: ");
        scanf("%f", &turma[i].nota.nota1);
        printf("Nota 2: ");
        scanf("%f", &turma[i].nota.nota2);
        printf("Nota 3: ");
        scanf("%f", &turma[i].nota.nota3);
    }    
}

float CalculaMediaAluno(aluno notas[], int tamanhoTurma)
{
    float soma[tamanhoTurma];
    //float media[tamanhoTurma];
    for (int i = 0; i < tamanhoTurma; i++)
    {
        soma[i] = notas[i].nota.nota1 + notas[i].nota.nota2 + notas[i].nota.nota3;
        notas[i].nota.media = soma[i] / TOTAL;
    }

    return notas[tamanhoTurma].nota.media;
}

void ImprimeMediaAluno(aluno notas[], int tamanhoTurma)
{
   
    for (int i = 0; i < 1; i++)
    {
        printf("Aluno \t Nota 1 \t Nota 2 \t Nota 3 \t Média\n");
        for (int j = 0; j < tamanhoTurma; j++)
        {
            printf("%s \t %.2f \t\t %.2f \t\t %.2f \t\t %.2f \n", notas[j].nome, notas[j].nota.nota1, 
                notas[j].nota.nota2, notas[j].nota.nota3, notas[j].nota.media);
        }
    }
}

float CalulaMediaTurma(aluno media[], int tamanhoTurma)
{
    float mediaTurma;
    float soma = 0;

    for (int i = 0; i < tamanhoTurma; i++)
    {
        soma = soma + media[i].nota.media;
    }

    mediaTurma = soma / (float) tamanhoTurma;
    return mediaTurma;
}

aluno BuscaMatricula(int numeroMatricula)
{
    aluno dadosAluno;

    // TODO

    return dadosAluno;
}
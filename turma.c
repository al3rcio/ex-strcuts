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
    char[STR] nome;
    int matricula;
    notas nota;
} aluno;

void InserindoDados();
void ImprimeDados();
aluno BuscaMatricula(int numeroMatricula);

int main()
{
    InserindoDados();

    return 0;
}

void InserindoDados()
{
    // TODO
}

void ImprimeDados()
{
    // TODO
}

aluno BuscaMatricula(int numeroMatricula)
{
    aluno dadosAluno;

    // TODO

    return dadosAluno
}
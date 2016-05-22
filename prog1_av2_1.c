#include <stdio.h>

int main()
{
    struct aluno
    {
        char nome[20];
        float nota;
    };
    struct aluno alunos[30];
    struct aluno aux;
    int i, j;
    
    printf("\nOlá, meu nome é Felipe Felix e este programa pode ser visto no seguinte endereço do github: https://github.com/FelipeFxOC/trabalhoAv2/prog1_av2_1.c\n");
    
    for(i=0; i<30; i++)
    {
        printf("\nentre com o nome do(a) aluno(a) %d:", i+1);
        scanf("%s", alunos[i].nome);
        printf("entre com a nota do(a) %s:", alunos[i].nome);
        scanf("%f", &alunos[i].nota);
    }
    
    for(i=0; i<30; i++)
    {
        for(j=i+1; j<30; j++)
        {
            if(alunos[i].nota < alunos[j].nota)
            {
                aux=alunos[j];
                alunos[j]=alunos[i];
                alunos[i]=aux;
            }
        }
    }
    
    printf("\n\tListagem AV1\n");
    printf("_____________________________\n");
    printf("Nome do Aluno\t\tAV1\n");
    
    for(i=0;i<30;i++)
    {
    printf("%s\t\t\t%.2f\n", alunos[i].nome, alunos[i].nota);
    }
    
    return 0;
}
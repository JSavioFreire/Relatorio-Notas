#include<stdio.h>
int main(){       //turma de 50 alunos, cada aluno faz 3 provas. mostrar media de cada prova, media de cada aluno e media total da turma.
const int alunos=2;   //coloquei alunos como uma constante, caso precise mudar a quantidade de alunos, basta mudar o valor da constante alunos.
int posi;
float pv1[posi],pv2[posi],pv3[posi],mprova[3],maluno[posi],mtotal;
mtotal=maluno[posi]=mprova[3]=0;
printf("\n\n			RELATORIO DE NOTAS.\n");  
	for(posi=1;posi<=alunos;posi++){								//esse for � para o usuario digitar as notas.
		printf("\n\nDigite a nota da prova 1 do aluno %d:",posi);
		scanf("%f",&pv1[posi]);
		printf("\nDigite a nota da prova 2 do aluno %d:",posi);
		scanf("%f",&pv2[posi]);
		printf("\nDigite a nota da prova 3 do aluno %d:",posi);
		scanf("%f",&pv3[posi]);	
	mtotal=mtotal+(pv1[posi]+pv2[posi]+pv3[posi])/3;
	mprova[0]=mprova[0]+pv1[posi];
	mprova[1]=mprova[1]+pv2[posi];
	mprova[2]=mprova[2]+pv3[posi];
	}{hhhfjjf-
	mtotal=mtotal/alunos;
	mprova[0]=mprova[0]/alunos;
	mprova[1]=mprova[1]/alunos;
	mprova[2]=mprova[2]/alunos;
printf("\n\n\nA media total da turma e: %.1f\n",mtotal);
printf("A media da prova 1 e: %.1f\n",mprova[0]);
printf("A media da prova 2 e: %.1f\n",mprova[1]);
printf("A media da prova 3 e: %.1f\n\n",mprova[2]);
	for(posi=1;posi<=alunos;posi++){
		maluno[posi]=(pv1[posi]+pv2[posi]+pv3[posi])/3;
		printf("A media do aluno %d e:%.1f",posi,maluno[posi]);
		if(maluno[posi]>=7){
			printf("		APROVADO!\n");
		}
		else{
			printf("		REPROVADO!\n");
		}
	}

	
	
	
	
}

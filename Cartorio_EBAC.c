#include <stdio.h> //biblioteca de comunica√ß√£o com o usu√°rio
#include <stdlib.h> //biblioteca de aloca√ß√£o de espa√ßo em mem√≥ria
#include <locale.h> //biblioteca de aloca√ß√µes de texto por regi√£o
#include <string.h> //biblioteca respons√°vel por cuidar das string
		
int registro() //FunÁ„o resposavel por cadrsatar os ˙suarios no sistema 
{
	//inicio da criaÁ„o de vari·veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criaÁ„o de vari·veis/string
	
	printf("Digite o CPF a ser cadastrado: ");//coletando informaÁ„o do usu·rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever.
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // criando o arquivo e o "a" significa atualizando o arquivo criado
	fprintf(file,",");// salvcando o arquivo
	fclose(file); // fechnado o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // coletando a informaÁ„o do usuario
	scanf("%s",nome);// %s refere-se a string
	
	file = fopen(arquivo, "a");// criando o arquivo e o "a" significa atualizando o arquivo criado
	fprintf(file,nome); //salvando o arquivo 
	fclose(file);//fechando o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);	
	
    system("pause");

}

int consulta()
{
    setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("N„o foi possivel abrir o arqivo. N„o foi localizado!\n");
	}
	
	while(fgets(conteudo, 200, file)!=NULL)
	{
		printf("\n Essas s„o as informaÁıes do usuario: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system ("pause");

	
}

int deletar()
{
	char cpf[40];	
	
	printf("Digite o CPF do usu·rio a ser deletado!\n");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu·rio n„o se encontra no siatema!.\n");
		system("pause");
	}
	
	
	
}


	
int main()
	{
	int opcao=0; //Definindo vari√°veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{

		system("cls");

		setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
			
		printf("### Cart√≥rio da EBAC ###\n\n"); //inicio do menu
		printf("Escolha a op√ß√£o desejada do menu\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n"); 
		printf("Op√ß√£o: ");//fim do menu
				
		scanf("%d", &opcao); //armazenando a escolha do usu√°rio
		
		system("cls"); // resposavel por limpar a tela 
	
		switch(opcao) //inicio da sele√ß√£o do menu
		{
			case 1:
			registro(); //chamanda de funÁıes
			break;
			
			case 2:
			consulta();
			break; 
		
			case 3:
			deletar();
			break;
		
			default:
			printf("Essa op√ß√£o n√£o est√° disponivel!\n");
			system("pause");
			break;
		} //fim da sele√ß√£o
			
	}	
}

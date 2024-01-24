#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include<locale.h> //biblioteca de alocações de texto por região
#include<string.h> //biblioteca responsável por cuidar das string
		
int registro() //Fun??o resposavel por cadrsatar os ?suarios no sistema 
{
	//inicio da cria??o de vari?veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria??o de vari?veis/string
	
	printf("Digite o CPF a ser cadastrado: ");//coletando informa??o do usu?rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo e o "w" significa escrever.
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // criando o arquivo e o "a" significa atualizando o arquivo criado
	fprintf(file,",");// salvcando o arquivo
	fclose(file); // fechnado o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // coletando a informa??o do usuario
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
		printf("N?o foi possivel abrir o arqivo. N?o foi localizado!\n");
	}
	
	while(fgets(conteudo, 200, file)!=NULL)
	{
		printf("\n Essas s?o as informa??es do usuario: ");
		printf("%s",conteudo);
		printf("\n\n");
	}
	
	system ("pause");

	
}

int deletar()
{
	char cpf[40];	
	
	printf("Digite o CPF do usu?rio a ser deletado!\n");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu?rio n?o se encontra no siatema!.\n");
		system("pause");
	}
	
		
}
int main()
	{
	int opcao=0; //Definindo variáveis
	int laco=1;
	char senhadigitada[] = "a";
	int comparacao;

	printf("### Cartorio da EBAC ###\n\n");
	printf("Loguin de administrador!\n\n Digite a sua senha: \n");
	scanf("%s",senhadigitada);
	
	comparacao = strcmp(senhadigitada,"784512");
	
    if(comparacao == 0)
	{
		system ("cls");
	    for(laco=1;laco=1;)
       {

	     system("cls");

	   	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
			
		    printf("### Cartório da EBAC ###\n\n"); //inicio do menu
	    	printf("Escolha a opção desejada do menu\n\n");
	        printf("\t1 - Registrar nomes\n");
	    	printf("\t2 - Consultar nomes\n");
	    	printf("\t3 - Deletar nomes\n\n"); 
	    	printf("\t4 - Sair do Sistema\n\n");
	   	printf("Opção: ");//fim do menu
				
	    	scanf("%d", &opcao); //armazenando a escolha do usuário
		
	    	system("cls"); // resposavel por limpar a tela 
	
	    	switch(opcao) //inicio da seleção do menu
		    case 1:
		    registro(); //chamanda de fun??es
		    break;
		   
		    switch(opcao) //inicio da seleção do menu
			case 2:
	        consulta();
		    break; 
		    
			switch(opcao) //inicio da seleção do menu
		
			case 3:
		    deletar();
		    break;
		    
		   switch(opcao) //inicio da seleção do menu
		   
		    case 4:
		    printf("obrigado por utilizar o sistema\n\n");
		    return 0; //  retonando o valor , Quebra de la?o e fun?oes:
		    break; 
			
			switch(opcao) //inicio da seleção do menu	
		    default:
		    printf("Essa opção não está disponivel!\n");
		    system("pause");
		    break;
		} //fim da seleção
    }   
}
	






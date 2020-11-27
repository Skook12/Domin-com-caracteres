void PegarPeca(){//vai pegar o caracteres escolhidos para representar as pecas e nao permitir que pecas iguais sejam escolhidas
	fflush(stdin);
	system("cls");
	printf("              Pecas          \n");
	printf("===========================================\n");
	printf("\n");
	printf("*******  Digite o Caractere da Peca 0 *******\n");
	std::cin >> tipoPeca[0];
	printf("===========================================\n");
	while(1){
	fflush(stdin);
	system("cls");
	printf("              Pecas          \n");
	printf("===========================================\n");
	printf("\n");
	printf("*******  Digite o Caractere da Peca 1 *******\n");
	std::cin >> tipoPeca[1];
	printf("===========================================\n");
	
	if((tipoPeca[0]!=tipoPeca[1]))
		break;
		fflush(stdin);
		system("cls");
		std::cout << "===========================================\n";
		
		std::cout << "Digite um caractere diferente\n";
		
		std::cout << "===========================================\n\n";
		
		system("pause");
		
	}
	
	while(1){
	fflush(stdin);	
	system("cls");
	printf("              Pecas          \n");
	printf("===========================================\n");
	printf("\n");
	printf("*******  Digite o Caractere da Peca 2 *******\n");
	std::cin >> tipoPeca[2];
	printf("===========================================\n");
	
	if((tipoPeca[2]!=tipoPeca[0]) && (tipoPeca[2]!=tipoPeca[1]))
		break;
		fflush(stdin);
		system("cls");
		std::cout << "===========================================\n";
		
		std::cout << "Digite um caractere diferente\n";
		
		std::cout << "===========================================\n\n";
		
		system("pause");
	}
	
	while(1){
	fflush(stdin);
	system("cls");
	printf("              Pecas          \n");
	printf("===========================================\n");
	printf("\n");
	printf("*******  Digite o Caractere da Peca 3 *******\n");
	std::cin >> tipoPeca[3];
	printf("===========================================\n");
	
	if((tipoPeca[3]!=tipoPeca[0]) && (tipoPeca[3]!=tipoPeca[1]) && (tipoPeca[3]!=tipoPeca[2])) 
		break;
		fflush(stdin);
		system("cls");
		std::cout << "===========================================\n";
		
		std::cout << "Digite um caractere diferente\n";
		
		std::cout << "===========================================\n\n";
		
		system("pause");
	}
	fflush(stdin);
	while(1){
	fflush(stdin);
	system("cls");
	printf("              Pecas          \n");
	printf("===========================================\n");
	printf("\n");
	printf("*******  Digite o Caractere da Peca 4 *******\n");
	std::cin >> tipoPeca[4];
	printf("===========================================\n");
	
	if((tipoPeca[4]!=tipoPeca[0]) && (tipoPeca[4]!=tipoPeca[1]) && (tipoPeca[4]!=tipoPeca[2]) && (tipoPeca[4]!=tipoPeca[3])) 
		break;
		fflush(stdin);
		system("cls");
		std::cout << "===========================================\n";
		
		std::cout << "Digite um caractere diferente\n";
		
		std::cout << "===========================================\n\n";
		
		system("pause");
	}
	fflush(stdin);
	while(1){
	fflush(stdin);
	system("cls");
	printf("              Pecas          \n");
	printf("===========================================\n");
	printf("\n");
	printf("*******  Digite o Caractere da Peca 5 *******\n");
	std::cin >> tipoPeca[5];
	printf("===========================================\n");
	
	if((tipoPeca[5]!=tipoPeca[0]) && (tipoPeca[5]!=tipoPeca[1]) && (tipoPeca[5]!=tipoPeca[2]) && (tipoPeca[5]!=tipoPeca[3]) && (tipoPeca[5]!=tipoPeca[4])) 
		break;
		fflush(stdin);
		system("cls");
		std::cout << "===========================================\n";
		
		std::cout << "Digite um caractere diferente\n";
		
		std::cout << "===========================================\n\n";
		
		system("pause");
	}
	fflush(stdin);
	while(1){
	fflush(stdin);
	system("cls");
	printf("              Pecas          \n");
	printf("===========================================\n");
	printf("\n");
	printf("*******  Digite o Caractere da Peca 6 *******\n");
	std::cin >> tipoPeca[6];
	printf("===========================================\n");
	
	if((tipoPeca[6]!=tipoPeca[0]) && (tipoPeca[6]!=tipoPeca[1]) && (tipoPeca[6]!=tipoPeca[2]) && (tipoPeca[6]!=tipoPeca[3]) && (tipoPeca[6]!=tipoPeca[4]) && (tipoPeca[6]!=tipoPeca[5])) 
		break;
		fflush(stdin);
		system("cls");
		std::cout << "===========================================\n";
		
		std::cout << "Digite um caractere diferente\n";
		
		std::cout << "===========================================\n\n";
		
		system("pause");
	}
	fflush(stdin);
}	
	

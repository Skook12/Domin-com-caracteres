void PegarNome(){//vai pegar os nomrs escolhidos para representar os jogadores e nao permitir que nomes iguais sejam escolhidas
	fflush(stdin);
	system("cls");
	printf("              Nome Do Jogador          \n");
	printf("===========================================\n");
	printf("\n");
	printf("*******  Digite o Nome do Jogador 1 *******\n");
	std::cin >> jogadores[0].nome;
	printf("===========================================\n");
	while(1){
	fflush(stdin);
	system("cls");
	printf("              Nome Do Jogador          \n");
	printf("===========================================\n");
	printf("\n");
	printf("*******  Digite o Nome do Jogador 2 *******\n");
	std::cin >> jogadores[1].nome;
	printf("===========================================\n");
	
	if((jogadores[1].nome.compare(jogadores[0].nome)!=0))
		break;
		fflush(stdin);
		system("cls");
		std::cout << "===========================================\n";
		
		std::cout << "Digite um nome diferente dos outros jogadores\n";
		
		std::cout << "===========================================\n\n";
		
		system("pause");
		
	}
	
	while(1){
	fflush(stdin);	
	system("cls");
	printf("              Nome Do Jogador          \n");
	printf("===========================================\n");
	printf("\n");
	printf("*******  Digite o Nome do Jogador 3 *******\n");
	std::cin >> jogadores[2].nome;
	printf("===========================================\n");
	
	if((jogadores[2].nome.compare(jogadores[0].nome)!=0) && (jogadores[2].nome.compare(jogadores[1].nome)!=0))
		break;
		fflush(stdin);
		system("cls");
		std::cout << "===========================================\n";
		
		std::cout << "Digite um nome diferente dos outros jogadores\n";
		
		std::cout << "===========================================\n\n";
		
		system("pause");
	}
	
	while(1){
	fflush(stdin);
	system("cls");
	printf("              Nome Do Jogador          \n");
	printf("===========================================\n");
	printf("\n");
	printf("*******  Digite o Nome do Jogador 4 *******\n");
	std::cin >> jogadores[3].nome;
	printf("===========================================\n");
	
	if((jogadores[3].nome.compare(jogadores[0].nome)!=0) && (jogadores[3].nome.compare(jogadores[1].nome)!=0) && (jogadores[3].nome.compare(jogadores[2].nome)!=0)) 
		break;
		fflush(stdin);
		system("cls");
		std::cout << "===========================================\n";
		
		std::cout << "Digite um nome diferente dos outros jogadores\n";
		
		std::cout << "===========================================\n\n";
		
		system("pause");
	}
	fflush(stdin);
	
}

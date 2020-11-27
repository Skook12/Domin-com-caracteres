void Apresentacao(){//vai apresentar as regras do jogo
	std::string AuxApresent;
	printf("==================================================\n");
	printf("\n");
	printf("                 Bem Vindo ao Domino                \n");
	printf("==================================================\n");
	printf("                     Instrucoes                  \n");
	printf("==================================================\n");
	printf("1°- O Jogo consiste em conseguir utilizar todas  \n");
	printf("as suas pecas,ou seja quem nao tiver mais nenhuma\n");
	printf("peca na mao ganha o jogo\n");
	printf("___________________________________________________\n");
	printf("2°-Voce so pode Jogar uma peca se um dos numeros  \n");
	printf("que ela possui for igual a um dos numeros mais a  \n");
	printf("esquerda ou mais a direita da mesa                \n");
	printf("___________________________________________________\n");
	printf("3°-Voce podera escolher o caracter da peca que sera\n");
	printf("utilizada no lugar das ja conhecidas  ex: @ = 1    \n");
	printf("___________________________________________________\n");
	printf("4°-O Jogador que Comeca o jogo e o que possui a   \n");
	printf("bucha de as(1/1) ou no caso a peca que seja       \n");
	printf("equivalente a ela ex:(@/@),sendo os demais ordens \n");
	printf("de jogada dos jogares em ordem apos ele \n");
	printf("___________________________________________________\n");
	printf("5°-O jogador so podera passar a sua vez quando nao\n");
	printf("tiver nenhuma peca na mao que possua um numero igual\n");
	printf("aos das extremidades da mesa                      \n");
	printf("___________________________________________________\n");
	printf("6°-Em caso de jogo trancar                         \n");
	printf("(ninguem conseguir jogar mais nenhuma peca) o jogador\n");
	printf("com o menor numero de pecas ganha,em caso de empate\n");
	printf("nenhum jogador ganha ponto no placar                 \n");
	printf("____________________________________________________\n");
	printf("7°-Nao e permitido o uso de espaco no nome do jogador\n");
	printf("____________________________________________________\n");
	printf("8°-Nao e permitido jogadores com nomes iguais      \n");
	printf("ou caracteres de pecas iguais \n");
	printf("____________________________________________________\n");
	printf("          Digite Qualquer coisa para continuar     \n");
	std::cin>>AuxApresent;//colocado so pra nao passar de tela e poder demorar quanto tempo quiser lendo as regras
	
	
}

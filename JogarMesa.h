void JogarMesa(std::list <std::pair<char,char> > &l,std::list <std::pair<char,char> > &mesa, std::string nome){//ira jogar as pecas na mesa
	
	int check = 0, select; //o check ira garantir que uma jogada foi feita e select sera a escolha da peca
	
	char soud;//vai ser a escolha do lado que sera jogada a peca
	
	std::list <std::pair<char,char> > aux;//lista auxiliar para guarda a pecas que serao "dislocadas"
	while(check == 0){
	
	if(PassarVez(l,mesa) == false || mesa.empty()){//ira entrar se tiver pecas para jogar na mesa ou se a mesa estiver vazia
		
	trancado = 0;//vai reiniciar a contagem do trancado
	system("cls");
	ImprimirMesa(l,nome,mesa);
	std::cout << "Selecione a peca desejada: ";
	std::cin>>select;  
	fflush(stdin);
	l.sort();
	if( 0< select <= l.size()){
	
	select--;
	for(int i =0;i<select;i++){//as pecas que vem antes da peca que o jogador escolheu sera deslocada para uma lista auxiliar
			aux.push_back(l.front());
			l.pop_front();
		}
	if (primeiravez == 0){//se for a primeira jogada do jogo
		
		
		if( l.front().first == tipoPeca[1] && l.front().second == tipoPeca[1] ){
			
		mesa.push_back(l.front());
		l.pop_front();
		while(!aux.empty()){
			l.push_front(aux.back());
			aux.pop_back();
		}
		primeiravez++;
		check++;
			
	}else{//so vai sair quando for jogada a bucha de as
		while(!aux.empty()){
			l.push_front(aux.back());
			aux.pop_back();
		}
		std::cout << "O jogo comeca com a bucha de as (1/1) \n";
		system("pause");
	}
		
		
		
	
	
	
	
}else{// se nao for a primeira vez sera dado a escolha de qual lado a peca sera jogada
		
		std::cout << "Voce quer jogar na direita ou na esquerda? Digite 's' para esquerda e 'd'' para direita: \n";
		std::cin >> soud;
		
	if(soud == 's'){//vai comparar o valor da peca as extremidade esquerda da mesa
			
	if(l.front().first == mesa.front().first ){
		std::swap(l.front().first,l.front().second);//pra "rodar" a peca
		mesa.push_front(l.front());
		l.pop_front();
		check++;
		while(!aux.empty()){
			l.push_front(aux.back());
			aux.pop_back();
		}
		
	}else if(l.front().second == mesa.front().first ){
		
		mesa.push_front(l.front());
		l.pop_front();
		check++;
		while(!aux.empty()){
			l.push_front(aux.back());
			aux.pop_back();
		}
	}else{
		while(!aux.empty()){
			l.push_front(aux.back());
			aux.pop_back();
		}
		std::cout << "Voce selecionou uma peca invalida!!!\n";
		system("pause");
		
	}
			
			
		
	}else if (soud == 'd'){// faz a mesma coisa do lado esquerdo  mais comparando com a extremidade direita da mesa
		
		if (l.front().first == mesa.back().second ){
		mesa.push_back(l.front());
		l.pop_front();
		check++;
		while(!aux.empty()){
			l.push_front(aux.back());
			aux.pop_back();
		}
	}else if (l.front().second == mesa.back().second ){
		std::swap(l.front().first,l.front().second);
		mesa.push_back(l.front());
		l.pop_front();
		check++;
		while(!aux.empty()){
			l.push_front(aux.back());
			aux.pop_back();
		}
	}else{
	while(!aux.empty()){
			l.push_front(aux.back());
			aux.pop_back();
		}	
	std::cout << "Voce selecionou uma peca invalida!!!\n";
    system("pause");
		
	}
		
		
	}else{
		
	std::cout << "Voce selecinou uma direcao invalida\n";
		system("pause");
	}
	
	
	
	
	
}
	
	
	
}else{
	
	std::cout << "Selecione uma direcao invalida\n";
	system("pause");
	
}
	
}else{
	trancado++;
	system("cls");
	ImprimirMesa(l,nome,mesa);
	std::cout << "Voce passou a vez\n";
	
	system("pause");
	
	break;
	
	
}



}






}

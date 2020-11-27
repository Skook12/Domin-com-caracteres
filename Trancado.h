void Trancado(){//vai analizar qual ou quais jogadores possuem as menores pecas e adicionar a lista de ganhadores
	int aux[4];
	for(int i=0;i<4;i++){
		aux[i]=jogadores[i].peca.size();
	}
	if(aux[0]==aux[1]==aux[2]==aux[3]){
		for(int i=0;i<4;i++){
			ganhadores.push_back(jogadores[i].nome);	
		}
	}else if(aux[0]==aux[1] && aux[0]<aux[2] && aux[0]<aux[3]){
		for(int i=0;i<2;i++){
			ganhadores.push_back(jogadores[i].nome);	
		}
	}else if(aux[0]==aux[2] && aux[0]<aux[1] && aux[0]<aux[3]){
		ganhadores.push_back(jogadores[0].nome);
		ganhadores.push_back(jogadores[2].nome);
	}else if(aux[0]==aux[3] && aux[0]<aux[1] && aux[0]<aux[2]){
		ganhadores.push_back(jogadores[0].nome);
		ganhadores.push_back(jogadores[3].nome);
	}else if(aux[1]==aux[2] && aux[1]<aux[0] && aux[1]<aux[3]){
		ganhadores.push_back(jogadores[1].nome);
		ganhadores.push_back(jogadores[2].nome);
	}else if(aux[1]==aux[3] && aux[1]<aux[0] && aux[1]<aux[2]){
		ganhadores.push_back(jogadores[1].nome);
		ganhadores.push_back(jogadores[3].nome);
	}else if(aux[2]==aux[3] && aux[2]<aux[0] && aux[2]<aux[1]){
		ganhadores.push_back(jogadores[2].nome);
		ganhadores.push_back(jogadores[3].nome);
	}else if(aux[0]<aux[1] && aux[0]<aux[2] && aux[0]<aux[3] ){
		ganhadores.push_back(jogadores[0].nome);
	}else if(aux[1]<aux[0] && aux[1]<aux[2] && aux[1]<aux[3] ){
		ganhadores.push_back(jogadores[1].nome);
	}else if(aux[2]<aux[1] && aux[2]<aux[0] && aux[2]<aux[3] ){
		ganhadores.push_back(jogadores[2].nome);
	}else if(aux[3]<aux[1] && aux[3]<aux[2] && aux[3]<aux[0] ){
		ganhadores.push_back(jogadores[3].nome);
	}
	TelaEmpate();
}

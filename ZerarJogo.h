void ZerarJogo(){//vai arrumar o jogo pra comecar 
	for(int i=0;i<4;i++){
			primeiravez = 0;
			while(!jogadores[i].peca.empty()){
				jogadores[i].peca.pop_back();
			}
			}
			while(!ganhadores.empty()){
				ganhadores.pop_back();
			}
			while(!mesa.empty()){
				mesa.pop_back();
			}
			Sorteio();
			for(int i = 0;i<4;i++){
				if(QuemVemPrimeiro(jogadores[i].peca)){
				vez = i;	
				}	
			}
}

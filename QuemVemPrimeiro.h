bool QuemVemPrimeiro(std::list <std::pair <char,char> > l){//vai encontrar o jogador que esta com a peca de as e indicar que e ele que comeca
	

for(int i=0;i<7;i++){
	
	if( l.front().first == tipoPeca[1] && l.front().second == tipoPeca[1] ){
		return true;
	}
	l.pop_front();
}

return false;
	
	
}

 int PassarVez(std::list <std::pair<char,char> > l,std::list <std::pair<char,char> > mesa ){//vai comparar a mao do jogador com as extremidades da mesa pra saber se ele tem pessas pra jogar ou nao
		while(!l.empty()){
			
			if(l.front().first==mesa.front().first || l.front().second==mesa.front().first || l.front().first==mesa.back().second || l.front().second==mesa.back().second ){
				return false;
			}
			l.pop_front();
			
			
		}
		return true;
		
}

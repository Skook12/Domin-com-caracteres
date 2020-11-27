std::pair <char,char>  aux;
std::vector<std::pair<char,char> >Pec;
void Sorteio(){//sera declarada as pecas e posteriormente embaralhadas

	aux.first = tipoPeca[0];//branco
	aux.second = tipoPeca[0];
	Pec.push_back(aux);
	aux.second = tipoPeca[1];
	Pec.push_back(aux);
	aux.second = tipoPeca[2];
	Pec.push_back(aux);
	aux.second = tipoPeca[3];
	Pec.push_back(aux);
	aux.second = tipoPeca[4];
	Pec.push_back(aux);
	aux.second = tipoPeca[5];
	Pec.push_back(aux);
	aux.second = tipoPeca[6];
	Pec.push_back(aux);
	aux.first = tipoPeca[1];//as
	aux.second = tipoPeca[1];
	Pec.push_back(aux);
	aux.second = tipoPeca[2];
	Pec.push_back(aux);
	aux.second = tipoPeca[3];
	Pec.push_back(aux);
	aux.second = tipoPeca[4];
	Pec.push_back(aux);
	aux.second = tipoPeca[5];
	Pec.push_back(aux);
	aux.second = tipoPeca[6];
	Pec.push_back(aux);
	aux.first = tipoPeca[2];//duque
	aux.second = tipoPeca[2];
	Pec.push_back(aux);
	aux.second = tipoPeca[3];
	Pec.push_back(aux);
	aux.second = tipoPeca[4];
	Pec.push_back(aux);
	aux.second = tipoPeca[5];
	Pec.push_back(aux);
	aux.second = tipoPeca[6];
	Pec.push_back(aux);
	aux.first = tipoPeca[3];//terno
	aux.second = tipoPeca[3];
	Pec.push_back(aux);
	aux.second = tipoPeca[4];
	Pec.push_back(aux);
	aux.second = tipoPeca[5];
	Pec.push_back(aux);
	aux.second = tipoPeca[6];
	Pec.push_back(aux);
	aux.first = tipoPeca[4];//quadra
	aux.second = tipoPeca[4];
	Pec.push_back(aux);
	aux.second = tipoPeca[5];//quina
	Pec.push_back(aux);
	aux.second = tipoPeca[6];
	Pec.push_back(aux);
	aux.first = tipoPeca[5];
	aux.second = tipoPeca[5];
	Pec.push_back(aux);
	aux.second = tipoPeca[6];
	Pec.push_back(aux);
	aux.first = tipoPeca[6];//sena
	Pec.push_back(aux);
	
	srand(time(NULL));
	std::random_shuffle ( Pec.begin(), Pec.end() );//embaralhamento de pecas


for(int j = 0; j < 4; j++){//agora sera distribuido as pecas as maos dos jogadores

for(int i=0;i<7;i++){
	
	jogadores[j].peca.push_back( Pec.back());
	Pec.pop_back();
}

}

}




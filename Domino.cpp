#include <iostream>
#include <list>
#include <vector>
#include <algorithm> 
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "Apresentacao.h"
#include "Variaveis.h"
#include "PegarPeca.h"
#include "PegarNome.h"
#include "Sorteio.h"
#include "QuemVemPrimeiro.h"
#include "ImprimirMesa.h"
#include "PassarVez.h"
#include "JogarMesa.h"
#include "TelaFim.h"
#include "TelaEmpate.h"
#include "Trancado.h"
#include "Menu.h"
#include "Score.h"
#include "PrintarScore.h"
#include "ZerarJogo.h"

using namespace std;

int main(void){
	Apresentacao();
	PegarPeca();
	PegarNome();
	while(escolha!=3){//se escolher 3 no menu o jogo ira fechar
		Menu();
		if(escolha==1){// se for escolhido 1 no menu ira comecar o jogo
			ZerarJogo();
			while(true){
				JogarMesa(jogadores[vez].peca,mesa,jogadores[vez].nome);
				if(jogadores[vez].peca.empty()){//se um jogador conseguir se livrar de todas as pecas de sua mao ele 
				TelaFim(jogadores[vez].nome);
				Score();
				break;
				}else if(trancado==4){//quando trancado chega a 4 significa que os 4 jogadores passaram a vez seguidadmente
				Trancado();
				break;
				}
				vez++;
				if(vez>=4){
					vez=0;
				}	
		
			}
	
	}else if (escolha==2){//se for escolhido 2 no menu ira mostrar o scoreboard
		PrintarScore();
}
}
}

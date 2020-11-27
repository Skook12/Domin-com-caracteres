void PrintarScore(){//vai ler o arquivo e printar na tela do console o scoreboard
	
system("cls");

std::ifstream arq;

arq.open("ScoreBoard.txt");

int cont = 0;
std::cout<< "==============Score==============\n";
while(!arq.eof()){
	
	
	std::string nome;
	int pontos = 0;
	
	arq >> nome; 
	arq>> pontos;
	if(pontos != 0){
	cont++;	

	
std::cout<< cont << ". " << nome << " " << pontos  << "\n";



	

}


}

arq.close();

std::cout<< "=================================\n";	

system("pause");

if(cont == 0){
	std::cout<< "Nao tem nenhum ganhador ainda\n";
	system("pause");
	
}	
		
	
	
}

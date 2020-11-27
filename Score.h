void Score()//funcao que ira ler o arquivo e posteriormente reescreve-lo 
{
	
std::ifstream arq;
std::ofstream arquivo;
std::list< std::pair <int,std::string> > score;
int achou = 0;
std::string *pontS;

arq.open("ScoreBoard.txt");
		
while(!arq.eof()){//vai ler as informacoes do arquivo e colocar em uma lista
	
	int cont = 0;
	std::string nome;
	int pontos = 0;
	
	arq >> nome; 
	arq >> pontos;
	if(pontos != 0){
	
	score.push_back(std::make_pair(pontos, nome) );
	
	
	
	if(ganhadores.front() == score.back().second){//se tiver algum nome na lista com o mesmo nome do ganahdor ira ser somado 1 ponto a sua pontuacao
		
		score.back().first += 1;
		
		achou = 1;
		
	}
}
}

arq.close();

if(achou == 0){//se nao tiver nada no arquivo sera colocado o nome do ganahdor junto com o primeito ponto dele

	score.push_back(std::make_pair(1, ganhadores.front()));
	
	std::cout << score.back().first << " " <<score.back().second << "\n";

	
}

score.sort();//ira ordenar de forama crescente os resultados

arquivo.open("ScoreBoard.txt",std::ios::trunc);

while(!score.empty()){
	
arquivo << score.back().second << " " << score.back().first << std::endl;//sera printado do back por estar em busca que os maiores valores fiquem no comeco do arquivo
score.pop_back();
 
}

arquivo.close();


}

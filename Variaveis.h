std::list< std::pair <char,char> > mesa ;//a mesa do jogo
std::list<std::string> ganhadores;//nome dos ganhadores
char tipoPeca[7];//vai guardar os caracteres que representao as pecas

struct player{
	std::string nome;//nome do jogador
	std::list <std::pair < char,char > > peca;//mao do jogador
}jogadores[4];

int escolha;//usada no Menu()
int vez;//vai indicar a vez do jogador
int primeiravez = 0;//vai incidar que e a primeira jogado
int trancado;//vai armazenar as vezes que os jogaores passaram seguidamente


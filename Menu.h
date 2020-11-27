void Menu(){//menu do jogo
	
while(true){
	
system("cls");

std::cout << "====================\n";
std::cout << "        Menu\n";	
std::cout << "====================\n";
std::cout << "1)------Jogo--------\n";
std::cout << "2)------Score-------\n";
std::cout << "3)------Sair--------\n";
std::cout << "====================\n";
std::cin >> escolha;
if(escolha == 1 || escolha == 2||escolha == 3){
	
	break;
	
}else{
	
	std::cout << "Escolha uma opcao valida\n";
	system("pause");
	
}

}

}

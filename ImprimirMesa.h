void ImprimirMesa(std::list <std::pair <char,char> > l , std::string nome, std::list <std::pair <char,char> > mesa){// Essa função ira imprimir o mapa


	system("cls");

	
 std::cout << "                                             " << nome << "\n";	 
 
 printf("\n\n                                             Pecas:\n\n");
 
 
 std::cout << "                                ";
 
	l.sort();
 
for(int i = 0; i < l.size() ; i++){
 	std::cout << "  " << i+1  << "   "; 
}
 
 
 
 std::cout << "\n" << "                                ";
	
	while(!l.empty()){
 	std::cout << "[" << l.front().first <<  "|" <<l.front().second << "] "; 
 	l.pop_front();
}
 
 

 printf("\n\n\n========================================================================================================================\n\n\n");
 
 if(primeiravez != 0){
 
 while(!mesa.empty()){
 
 std::cout << "[" << mesa.front().first << "|" <<   mesa.front().second << "]";
 mesa.pop_front();
}

}
 
 printf("\n\n\n\n\n\n========================================================================================================================\n");
 
 	
		
}


void TelaEmpate(){//vai mostrar na tela o ou os ganhdores pela regra de trancar o jogo
	system("cls");
	printf("==========================================\n");
	printf("\n\n");
	printf("             Empatou entre:  \n");
	while(!ganhadores.empty()){
	
	std::cout<<"               "<<ganhadores.front()<<"\n";
	ganhadores.pop_front();
}

	printf("==========================================\n");
	
	system("pause");
	
}

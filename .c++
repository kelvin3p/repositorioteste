#include <iostream>
#include <cstdlib>

using namespace std;

void styleI();
void jg();

// Variaveis Globais
int c=0,c2=10,tp=0,ac=0;
bool va = false;
char p[10],d,ps[10];

main(void){
	styleI();	// Chama Tela Inicial do Game
	jg();	 // Chama o Codigo do Game
}

//Tela inicial do Game
void styleI(){
	cout << "=============================" << endl;
	cout << "========Jogo da Forca========" << endl;
	cout << "=============================" << endl;
	
	cout << " ____________________________" << endl;
	cout << "|                        |" << endl;
	cout << "|                       ( )" << endl;
	cout << "|                      / | \\" << endl;
	cout << "|                        |" << endl;
	cout << "|                       / \\" << endl;
	cout << "|" << endl;
	cout << "|" << endl;
	cout << "|       Palavra" << endl;
	cout << " ____________________________\n" << endl;
	
	system("pause");
}

// layout do Game
void styleG(){
	cout << "=============================" << endl;A
	cout << "========Jogo da Forca========" << endl;
	cout << "=============================" << endl;
	
	cout << " ____________________________" << endl;
	cout << "|                        |" << endl;
	cout << "|                       ( )" << endl;
	cout << "|                      / | \\" << endl;
	cout << "|                        |" << endl;
	cout << "|                       / \\" << endl;
	cout << "|  T:"<< c2+1 << endl;
	cout << "|" << endl;
	cout << "|       ";
}

//Codigo do Game
void jg(){
	system("cls");
	
	cout << "Digite a Palavra:";
	cin >> p;
	
	// Ele Conta o Tamanho da Palavra Digitada
	while (p[c] != '\0'){
		tp++;
		c++;
	}
	
	// Ocultação da Palavra
	for (c=0;c<tp;c++){
		ps[c] = '#';
	}
	
	// loop do Game
	while (c2-- > 0){	// Loop Para Quando Tentativas Zerar
		system("cls");
		
		styleG();	//Chama o layout do Game
		
		for (c=0;c<tp;c++){	 //Mostra a Palavra Ocultada
		cout << ps[c];
		}
		
		cout << "\n\nInforme uma Letra:";
		cin >> d;
		
		/* Verifica-se a Letra Digitada se é Igual a Letra da Palavra 
			e Substitui a Ocultação pela Letra Digitada
		*/
		for (c=0;c<tp;c++){ 
			if (p[c] == d){
				ps[c]=p[c];
				ac++; 	// Conta os Acertos
				if (ac == tp){		// Se ele acerta Tudo retorna verdadeiro	
					va = true;
				}
			}
		}
		
		/*	Segundo Verificação. Se for Verdadeiro Mostra que Ganhou
			 Se nao Retorna Falso
		*/
		if (va == true){
			system("cls"); 
			cout << "Voce Ganhou";
			break;
		}else{
			va = false;
		}
	}
	
	/* Fora do Loop , Verifica se for Falso, Caso Seja Mostra
		que o Usuario Perdeu por Tentativas Acabadas
	*/ 
	if (va == false){
	system("cls");
	cout << "Voce Perdeu";
	}
}

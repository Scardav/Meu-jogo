#include <iostream>
#include <string>

using namespace std;

int main () {
	string nomeHeroi;
	char e, s;
	
		cout << "Seja Bem Vindo " << endl;
		cout << "Masmorras Masmorras e mais Masmorras" << endl;
		cout << " hum seja bem vindo... Diga me o seu nome caro aventureiro " << endl;
		cout << "Digite seu nome abaixo\n";
		cin >> nomeHeroi;
		cout << "Seja bem vindo  " <<nomeHeroi;
		
		cout << "\nabra o menou para verificar seus status. Clique na tecla [e]";
	cin >> e;
		cout << "\n========================================================";
		cout << "============================Menu==========================";
		cout << "======                                            ========";
		cout << "======                 Inventario                 ========";
		cout << "======                                            ========";
		cout << "=======______________________________________/ ========";
		cout << "======                                            ========";
		cout << "======                configuraçao                ========";
		cout << "======                                            ========";
		cout << "=======_______________________________________/========";
		cout << "======                                            ========";
		cout << "======                    status                  ========";
		cout << "======                                            ========";
		cout << "=======_______________________________________/========";
		cout << "======                                            ========";
		cout << "======                                            ========";
		cout << "======                                           ========";
		cout << "=======_______________________________________/========";
		cout << "================================================================";
		cout << "================================================================";
		
		cout << "clique [i] para invetario,\nclique [c]para configuraçoes\nclique [s]para ver seus status";
		cin >> s;
		
		cout << "======STATUS======";
		cout << "==    Vida:25    ==";
		cout << "==   Ataque:75   ==";
		cout << "==    Mana:5    ==";
		cout << "===================";
	
	
	return 0;
}

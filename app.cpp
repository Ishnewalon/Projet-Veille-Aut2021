#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "app.hpp"
#include "user.hpp"

void App::run() {

	pqxx::connection C(SQLRequests::connectionString());
	if (C.is_open()) {
		std::cout << "La connexion a reussie" << std::endl;
		sql = new SQLRequests(C);
		displayMenu();
	}
}

void App::displayMenu() {
	do {
		std::cout << "Bienvenue Chez Barbies Resto Bar Grill" << std::endl;
                std::cout << "a) Connexion" << "\n"
                        << "q) Quitter" << std::endl;
                std::cout << "Que voulez-vous faire?" << std::endl;
                std::cin >> choix;

                if (choix == 'a') {
			std::cout << std::endl;
			connexionEmp();
		}
	}
        while (choix != 'q');	
}

void App::connexionEmp() {
	std::cout << "Votre numero d'employe" << std::endl;
        std::cin >> numEmp;
        std::cout << "Votre mot de passe" << std::endl;
        std::cin >> mdp;
        User user{numEmp, mdp};
	if (sql->findUser(user)){
		std::cout << "User found" << std::endl;
		std::cout << user.getNom() << user.getPrenom() << std::endl;
        }
	else {
		std::cout << std::endl;
		std::cout << "Numero d'employe ou Mot de Passe invalid" << std::endl;
		std::cout << std::endl;
		std::cout << "------------------" << std::endl;
		std::cout << std::endl;
	}
}

/*void App::internalMenu() {
	
}*/


#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "app.hpp"
#include "user.hpp"

void App::run() {

	if (C.is_open()) {
		std::cout << "La connexion a reussie" << std::endl;
		sql = new SQLRequests(C);
		displayConnectionMenu();
	}
}

void App::displayConnectionMenu() {
	do {
		std::cout << "Bienvenue Chez Barbies Resto Bar Grill" << std::endl;
                std::cout << "a) Connexion" << "\n"
                        << "q) Quitter" << "\n" << std::endl;
                
		std::cout << "Que voulez-vous faire?" << std::endl;
                std::cin >> choixExterne;

                if (choixExterne == 'a') {
			std::cout << std::endl;
			connexionEmp();
		}
	}
        while (choixExterne != 'q');	
}

void App::connexionEmp() {
	std::cout << "Votre numero d'employe" << std::endl;
        std::cin >> numEmp;
        std::cout << "Votre mot de passe" << std::endl;
        std::cin >> mdp;
        User user{numEmp, mdp};
	if (sql->findUser(user)){
		billingMenu(user);
        }
	else {
		empNotFound();
	}
}

void App::empNotFound() {
	std::cout << std::endl;
	std::cout << "Numero d'employe ou Mot de Passe invalid" << std::endl;
	std::cout << std::endl;
	std::cout << "------------------" << std::endl;
	std::cout << std::endl;
}

void App::billingMenu(User user) {
	std::cout << "Bonjour " << user.getNom() << ", " << user.getPrenom() << std::endl;
	do {
		displayBillingOptions();
		switch(choixInterne) {
			case 'a' : 
				//faireFacture();
				std::cout << "La facturation n'est pas disponible pour le moment" << std::endl;
				break;
			case 'b' : 
				std::cout << "La correction de facture n'est pas disponible pour le moment" << std::endl;
				break;
			case 'c' : 
				changePassword();
				break;
			case 'd' :
				changePrice();
				break;	
			default :
				std::cout << "Le choix n'est pas valid. Reessayer a nouveau" <<std::endl;
				break;
		}
	}
	while (choixInterne != 'e');
}

void App::displayBillingOptions() {
	std::cout << std::endl;
	std::cout << "a) Facturation (non fonctionnel)" << std::endl;
	std::cout << "b) Corriger Facture (non fonctionnel)" << std::endl;
	std::cout << "c) Changer de mot de passe" << std::endl;
	std::cout << "d) Changer le prix d'un plat" << std::endl;
	std::cout << "e) Logout" << std::endl;
	std::cout << "\n" << "Que voulez-vous faire?" << std::endl;
	std::cin >> choixInterne;
}

void App::changePassword() {
	std::string empID;
	std::string oldPassword;
	std::string newPassword;
	std::cout << "Entrez votre numero d'employe:" << std::endl;
	std::cin >> empID;
	std::cout << "Entrez votre ancien mot de passe:" << std::endl;
       	std::cin >> oldPassword;
	std::cout << "Entrez votre nouveau mot de passe:" << std::endl;
	std::cin >> newPassword;
	sql->updatePassword(empID, oldPassword, newPassword);
}

void App::changePrice() {
	double newPrice;
	std::string tableName;
	std::string menuItemName;
	std::cout << std::endl;
	std::cout << "Changement de prix \n" << std::endl;
	std::cout << "De quel menu provient le prix a changer? (Souper, Diner, Dejeuner, etc)" << std::endl;
	std::cin >> tableName;
	std::cout << "Entrez le nom du plat" << std::endl;
	std::cin >> menuItemName;
	std::cout << "Entrez le nouveau prix" << std::endl;
	std::cin >> newPrice;	
	sql->updatePrice(tableName, menuItemName, newPrice);
}

void App::displayChoixDesMenus() {
	std::cout << "Quel menu voulez-vous?" << std::endl;
	std::cout << "a) Dejeuner" << std::endl;
	std::cout << "b) Diner" << std::endl;
	std::cout << "c) Souper" << std::endl;
	std::cout << "d) Enfant" << std::endl;
	std::cout << "e) Combo" << std::endl;
	std::cout << "f) Breuvage" << std::endl;
	std::cout << "g) Dessert" << std::endl;
	std::cout << "f) Terminer la facture" << std::endl;
	std::cout << "h) Quitter" << std::endl;
	std::cout  << std::endl;
	std::cout << "Votre choix:" << std::endl;
	std::cin >> choixTypeMenu;
}

void App::faireFacture() {
	do {
		displayChoixDesMenus();
		switch(choixTypeMenu) {
			case 'a' :
				break;
			case 'b' :
				break;
			case 'c' :
				break;
			case 'd' :
				break;
			case 'e' :
				break;
			case 'f' :
				break;	
			case 'g' :
				break;
			case 'h' :
				break;
			default :
				std::cout << "Le choix n'est pas valid. Reessayer a nouveau" <<std::endl;
				break;	
		}
	}
	while (choixTypeMenu != 'h')
}

#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "App.hpp"

int main(){
	App app{};
	try {
		app.run();
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
                return 1;
        }

/*	SQLRequests sql{};
	char choix;
	std::string numEmp;
	std::string mdp;
	do {
		std::cout << "Bienvenue Chez Barbies Resto Bar Grill" << std::endl;
		std::cout << "a) Connexion" << "\n"
			<< "q) Quitter" << std::endl;
		std::cout << "Que voulez-vous faire?" << std::endl;
		std::cin >> choix;

		if (choix == 'a') {
			std::cout << "Votre numero d'employe" << std::endl;
			std::cin >> numEmp;
			std::cout << "Votre mot de passe" << std::endl;
			std::cin >> mdp;
			User user{numEmp, mdp};

			try{
                		pqxx::connection C(sql.toString());
                		if (C.is_open()){
                        		std::cout << "La connexion a reussie" << std::endl;
                			if (sql.findUser(C, user.getNumEmp(), user.getMDP())){
						std::cout << "User found" << std::endl;
					}
					sql.listRecords(C, "souper");
				}
                		else{
                        		std::cout << "La connexion a echouee" << std::endl;
                        		return 1;
                		}
                		C.disconnect();
        		}
        		catch(const std::exception &e){
                		std::cerr << e.what() << std::endl;
                		return 1;
        		}
		}

	}
	while (choix != 'q');
	
	User user{"S65739", "unMDP"};
	user.setNom("James");
	user.setPrenom("Cordon");
	std::cout << user.toString() << std::endl;
	*/
        return 0;
}


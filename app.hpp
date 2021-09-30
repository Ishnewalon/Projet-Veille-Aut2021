#pragma once
#include <pqxx/pqxx>
#include <string>
#include "SQLRequests.hpp"
#include "user.hpp"
#include <vector>
#include "menuItem.hpp"

class App {
        private:
		pqxx::connection C;
        	std::string numEmp;
		std::string mdp;
		char choixExterne;
		char choixInterne;
		char choixMenuType;
		SQLRequests *sql{nullptr};
		std::vector<MenuItem> facture;
	public: 
                App(): C{SQLRequests::connectionString()} {}
		void run();
		void displayConnectionMenu();
		void connexionEmp();
		void empNotFound();
		void billingMenu(User user);
		void displayBillingOptions();
		void changePassword();
		void changePrice();
		void displayChoixDesMenus();
		void faireFacture();

};


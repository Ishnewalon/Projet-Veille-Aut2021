#pragma once
#include <pqxx/pqxx>
#include <string>
#include "SQLRequests.hpp"
#include "user.hpp"

class App {
        private:
		pqxx::connection C;
        	std::string numEmp;
		std::string mdp;
		char choixExterne;
		char choixInterne;
		SQLRequests *sql{nullptr};
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
};


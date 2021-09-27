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
		char choix;
		SQLRequests *sql{nullptr};
	public: 
                App(): C{SQLRequests::connectionString()} {}
		void run();
		void displayMenu();
		void connexionEmp();
};


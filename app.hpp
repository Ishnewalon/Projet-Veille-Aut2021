#pragma once
#include <pqxx/pqxx>
#include <string>
#include "SQLRequests.hpp"
#include "User.hpp"

class App {
        private:
		pqxx::connection C;
        	std::string numEmp;
		std::string mdp;
		SQLRequests *sql(nullptr);
	public: 
                App(){}
		void run();
		void displayMenu();
		void connexionEmp();
};


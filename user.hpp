#pragma once
#include <string>

class User {
	private:
		std::string nom;
		std::string prenom;
		std::string numEmp;
		std::string mdp;
		
	public:
		User(std::string empID, std::string mdpEmp):numEmp{empID},mdp{mdpEmp}{}
		std::string getNom();
		std::string getPrenom();
		std::string getNumEmp();
		std::string getMDP();
		void setNom(std::string);
		void setPrenom(std::string);
		std::string toString();
};

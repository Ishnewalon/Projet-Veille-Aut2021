#include <iostream>
#include <string>
#include "User.hpp"

std::string User::getNom(){
	return nom;
}

std::string User::getPrenom(){
	return prenom;
}

std::string User::getNumEmp(){
        return numEmp;
}

std::string User::getMDP(){
        return mdp;
}

void User::setNom(std::string leNom){
	nom = leNom;
}

void User::setPrenom(std::string lePrenom){
	prenom = lePrenom;
}

std::string User::toString(){
	return "Prenom: " + prenom + "\n"
		"Nom: " + nom + "\n"
		"Numero d'employe: " + numEmp;
}

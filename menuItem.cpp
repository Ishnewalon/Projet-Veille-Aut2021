#include <iostream>
#include <string>
#include "menuItem.hpp"

std::string MenuItem::getNom() {
	return nom;
}

double MenuItem::getPrix() {
	return prix;
}

void MenuItem::setNom(std::string leNom) {
	nom = leNom;
}

void MenuItem::setPrix(double lePrix) {
	prix = lePrix;
}

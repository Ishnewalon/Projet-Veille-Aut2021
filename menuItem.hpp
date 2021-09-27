#pragma once
#include <string>

class MenuItem {
	private:
		std::string nom;
		std::string description;
		double prix;
		bool isRabais;
		bool isDispo;
	public:
		MenuItem() {}
		std::string getNom();
		double getPrix();
		void setNom(std::string leNom);
		void setPrix(double lePrix);
};

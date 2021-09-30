#pragma once
#include <pqxx/pqxx>
#include <string>
#include "SQLRequests.hpp"
#include <vector>
#include "menuItem.hpp"

class MenuLists {
	private :
		std::vector<MenuItem> dejeuner;
		std::vector<MenuItem> diner;
		std::vector<MenuItem> souper;
		std::vector<MenuItem> enfant;
		std::vector<MenuItem> combo;
		std::vector<MenuItem> breuvage;
		std::vector<MenuItem> dessert;
	public :
		MenuLists() {}

};

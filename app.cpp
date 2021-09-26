#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "app.hpp"

void App::run() {
	pqxx::connection C(SQLRequests::connectionString());
}


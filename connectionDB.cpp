#include <iostream>
#include <string>
#include <pqxx/pqxx>

int main(){
	try {
		pqxx::connection C("dbname = connecttest user = ishnewalon password = inf556 hostaddr = 127.0.0.1 port = 5432" );
		if (C.is_open()){
			std::cout << "La connexion a reussie" << std::endl;
		}
		else {
			std::cout << "La connexion a echouee" << std::endl;
			return 1;
		}
		C.disconnect();
	}
	catch(const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}


#include <iostream>
#include <string>
#include <pqxx/pqxx>

void createTable(pqxx::connection &C){
	const char * sqlStatement = "CREATE TABLE IF NOT EXISTS utilisateur(" \
				"EMPLOYEE_ID INT PRIMARY KEY 	NOT NULL," \
				"NOM 		TEXT		NOT NULL," \
				"PRENOM 	TEXT		NOT NULL," \
				"MDP 		TEXT		NOT NULL);";
	pqxx::work W(C);
	W.exec(sqlStatement);
	W.commit();
	std::cout << "La table a ete cree" << std::endl;
}

int main(){
	try {
		pqxx::connection C("dbname = connecttest user = ishnewalon password = inf556 hostaddr = 127.0.0.1 port = 5432" );
		if (C.is_open()){
			std::cout << "La connexion a reussie" << std::endl;
			createTable(C);
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


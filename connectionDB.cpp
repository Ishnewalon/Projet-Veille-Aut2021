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

void populateTable(pqxx::connection &C){
	const char * sqlStatement = "INSERT INTO utilisateur VALUES "\
				     "(1, 'Doe', 'John','doej'); "\
				     "INSERT INTO utilisateur VALUES "\
				     "(2, 'Hanes', 'George','hang'); "\
				     "INSERT INTO utilisateur VALUES "\
				     "(3, 'Damico', 'Nick','damn'); ";
	pqxx::work W(C);
	W.exec(sqlStatement);
	W.commit();
	std::cout << "Insert a fonctionne avec succes" << std::endl;
}

void emptyTable(pqxx::connection &C){
	const char * sqlStatement = "DELETE FROM utilisateur;";
	
	pqxx::work W(C);
	W.exec(sqlStatement);
	W.commit();
	std::cout << "DELETE a foncitonne avec succes" << std::endl;
}

void listRecords(pqxx::connection &C){
	const char * sqlStatement = "SELECT * FROM utilisateur;";
	
	pqxx::nontransaction N(C);
	pqxx::result R(N.exec(sqlStatement));
	for (pqxx::result::const_iterator iterator = R.begin(); iterator != R.end(); ++iterator){ //See what is best ++iterator or iterator++
		std::cout << "ID d'employee: " << iterator[0].as<int>() << std::endl;
		std::cout << "Nom: " << iterator[1].as<std::string>() << std::endl;
		std::cout << "Prenom: " << iterator[2].as<std::string>() << std::endl;
		std::cout << "Mot de passe: " << iterator[3].as<std::string>() << std::endl;
	}
	std::cout << "Fin des donnes" << std::endl;
}

void updateRecords(pqxx::connection &C){
	const char * sqlStatement = "UPDATE utilisateur SET mdp = 'mdpChange'"\
				    " WHERE employee_id = 1;";
	pqxx::work W(C);
	W.exec(sqlStatement);
	W.commit();
	std::cout << "Update des donnes a ete un succes" << std::endl;	
}

int main(){
	try{
		pqxx::connection C("dbname = connecttest user = ishnewalon password = inf556 hostaddr = 127.0.0.1 port = 5432");
		if (C.is_open()){
			std::cout << "La connexion a reussie" << std::endl;
			createTable(C);
			populateTable(C);
			listRecords(C);
			updateRecords(C);
			listRecords(C);
			emptyTable(C);
			listRecords(C);
		}
		else{
			std::cout << "La connexion a echouee" << std::endl;
			return 1;
		}
		C.disconnect();
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}


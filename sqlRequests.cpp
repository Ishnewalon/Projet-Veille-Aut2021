#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "SQLRequests.hpp"

std::string SQLRequests::toString(){
		return "dbname = " + dbName + " user = " + userName + " password = " + password + " hostaddr = " + hostaddr + " port = " + port;
	}	

void SQLRequests::listRecords(pqxx::connection &C, std::string tableName){
        	//const char * sqlStatement = "SELECT * FROM " + tableName.c_str() + ";";
		std::string sqlStatement = "SELECT * FROM " + tableName + ";";
        	pqxx::nontransaction N(C);
        	pqxx::result R(N.exec(sqlStatement));
		int counter = 1;
        	for (pqxx::result::const_iterator iterator = R.begin(); iterator != R.end(); ++iterator){ //See what is best ++iterator or iterator++

                	std::cout <<  iterator["nom"].as<std::string>() << std::endl;
			counter++;
		}
	        std::cout << "Fin des donnes" << std::endl;
}

/*void SQLRequests::createTable(pqxx::connection &C){
	const char * sqlStatement = "CREATE TABLE IF NOT EXISTS " + tableName + "(" \
				     "EMPLOYEE_ID INT PRIMARY KEY    NOT NULL," \
				     "NOM            TEXT            NOT NULL," \
				     "PRENOM         TEXT            NOT NULL," \
				     "MDP            TEXT            NOT NULL);";
	pqxx::work W(C);
	W.exec(sqlStatement);
	W.commit();
	std::cout << "La table " + tableName + " a ete cree" << std::endl;
}*/


	
/*void SQLResuests::populateTable(pqxx::connection &C){
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
}*/

/*      void SQLRequests::emptyTable(pqxx::connection &C){
                const char * sqlStatement = "DELETE FROM utilisateur;";

                pqxx::work W(C);
                W.exec(sqlStatement);
                W.commit();
                std::cout << "DELETE a foncitonne avec succes" << std::endl;
}
*/

/*	void SQLRequests::updateRecords(pqxx::connection &C, std::string tableName){
        	const char * sqlStatement = "UPDATE " + tableName + " SET mdp = 'mdpChange'"\
					     " WHERE employee_id = 1;";
        	pqxx::work W(C);
        	W.exec(sqlStatement);
        	W.commit();
	        std::cout << "Update des donnes a ete un succes" << std::endl;
}*/


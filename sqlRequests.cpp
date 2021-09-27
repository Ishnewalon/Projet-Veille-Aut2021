#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "SQLRequests.hpp"

const std::string SQLRequests::dbName {"facturation_resto"};
const std::string SQLRequests::userName {"ishnewalon"};
const std::string SQLRequests::password {"inf556"};
const std::string SQLRequests::hostaddr {"127.0.0.1"};
const std::string SQLRequests::port {"5432"};

std::string SQLRequests::connectionString(){
		return "dbname = " + dbName + " user = " + userName + " password = " + password + " hostaddr = " + hostaddr + " port = " + port;
	}	

void SQLRequests::listRecords(std::string tableName){
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

bool SQLRequests::findUser(User &user){
                std::string sqlStatement = "SELECT * FROM utilisateurs WHERE numemp = '" + user.getNumEmp() + "' AND mdp = '" + user.getMDP() + "' ;";
                pqxx::nontransaction N(C);
                pqxx::result R(N.exec(sqlStatement));
                
                for (pqxx::result::const_iterator iterator = R.begin(); iterator != R.end(); ++iterator){ 
			//std::cout <<  iterator["nom"].as<std::string>() << std::endl;
			//std::cout << iterator["prenom"].as<std::string>() << std::endl;
			return true;
                }
                //std::cout << "Fin des donnes" << std::endl;
		return false;
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


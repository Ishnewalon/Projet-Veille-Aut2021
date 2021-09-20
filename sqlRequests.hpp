#pragma once
#include <pqxx/pqxx>
#include <string>

class SQLRequests {
	private:
		std::string dbName{"facturation_resto"};
		std::string userName{"ishnewalon"};
		std::string password{"inf556"};
		std::string hostaddr{"127.0.0.1"};
		std::string port{"5432"};
	public:
		SQLRequests(){}
		//void createTable(pqxx::connection &C);
		//void populateTable(pqxx::connection &C);
		//void emptyTable(pqxx::connection &C);
		std::string toString();
		void listRecords(pqxx::connection &C, std::string tableName);
		bool findUser(pqxx::connection &C, std::string numEmp, std::string mdp);
		//void updateRecords(pqxx::connection &C, std::string tableName);
};

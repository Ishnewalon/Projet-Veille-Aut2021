#pragma once
#include <pqxx/pqxx>
#include <string>

class SQLRequests {
	private:
		static const std::string dbName;
		static const std::string userName;
		static const std::string password;
		static const std::string hostaddr;
		static const std::string port;

	public:
		SQLRequests(){}
		//void createTable(pqxx::connection &C);
		//void populateTable(pqxx::connection &C);
		//void emptyTable(pqxx::connection &C);
		static std::string connectionString();
		void listRecords(pqxx::connection &C, std::string tableName);
		bool findUser(pqxx::connection &C, std::string numEmp, std::string mdp);
		//void updateRecords(pqxx::connection &C, std::string tableName);
};

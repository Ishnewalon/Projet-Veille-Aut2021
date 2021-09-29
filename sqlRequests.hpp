#pragma once
#include <pqxx/pqxx>
#include <string>
#include "user.hpp"

class SQLRequests {
	private:
		static const std::string dbName;
		static const std::string userName;
		static const std::string password;
		static const std::string hostaddr;
		static const std::string port;
		pqxx::connection &C;
	public:
		SQLRequests(pqxx::connection &C): C{C} {}
		//void createTable(pqxx::connection &C);
		//void populateTable(pqxx::connection &C);
		//void emptyTable(pqxx::connection &C);
		static std::string connectionString();
		void listRecords(std::string tableName);
		bool findUser(User &user);
		void updatePassword(std::string oldPassword, std::string newPassword);
		//void updateRecords(pqxx::connection &C, std::string tableName);
};

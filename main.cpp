#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "SQLRequests.hpp"

int main(){
	SQLRequests sql{};
	try{
                pqxx::connection C(sql.toString());
                if (C.is_open()){
                        std::cout << "La connexion a reussie" << std::endl;
                	sql.listRecords(C, "souper");
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


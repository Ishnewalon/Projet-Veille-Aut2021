#include <iostream>
#include <string>
#include <pqxx/pqxx>
#include "SQLRequests.hpp"
#include "User.hpp"

int main(){
	SQLRequests sql{};
	User user{"S65739", "unMDP"};
	user.setNom("James");
	user.setPrenom("Cordon");
	std::cout << user.toString() << std::endl;
	try{
                pqxx::connection C(sql.toString());
                if (C.is_open()){
                        std::cout << "La connexion a reussie" << std::endl;
                	if (sql.findUser(C, user.getNumEmp(), user.getMDP())){
				std::cout << "User found" << std::endl;
			}
			//	sql.listRecords(C, "souper");
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


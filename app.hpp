#pragma once
#include <pqxx/pqxx>
#include <string>

class App {
        private:
		pqxx::connection C;
        public: 
                App(){}
		void Run();
};


#include "variables.h"
#include "commands.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if(argc < 2) {
        std::cout << "Uso: " << argv[0] << " script.mylang\n";
        return 1;
    }

    Variables vars; // Clase para manejar variables

    std::ifstream script(argv[1]);
    std::string line;
    while(std::getline(script, line)) {
        if(line.rfind("print ", 0) == 0) {
            Commands::print(line.substr(6), vars);
        } else if(line.rfind("set ", 0) == 0) {
            Commands::set(line.substr(4), vars);
        } else if(line.rfind("add ", 0) == 0) {
            Commands::add(line.substr(4), vars);
        } else if(line.rfind("run ", 0) == 0) {
            system(line.substr(4).c_str());
        }
    }

    return 0;
}

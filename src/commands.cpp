#include "commands.h"
#include <iostream>
#include <sstream>

namespace Commands {

void print(const std::string& arg, Variables& vars) {
    std::string output = arg;
    // Reemplazar $var por su valor
    size_t pos = output.find('$');
    while(pos != std::string::npos) {
        size_t end = pos+1;
        while(end < output.size() && (isalnum(output[end]) || output[end]=='_')) end++;
        std::string varName = output.substr(pos+1, end-pos-1);
        int value = vars.exists(varName) ? vars.get(varName) : 0;
        output.replace(pos, end-pos, std::to_string(value));
        pos = output.find('$', pos + 1);
    }
    std::cout << output << std::endl;
}

void set(const std::string& arg, Variables& vars) {
    std::istringstream ss(arg);
    std::string name;
    int value;
    ss >> name >> value;
    vars.set(name, value);
}

void add(const std::string& arg, Variables& vars) {
    std::istringstream ss(arg);
    std::string name;
    int value;
    ss >> name >> value;
    int current = vars.exists(name) ? vars.get(name) : 0;
    vars.set(name, current + value);
}

}

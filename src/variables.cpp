#include "variables.h"
#include <stdexcept>

void Variables::set(const std::string& name, int value) {
    vars[name] = value;
}

int Variables::get(const std::string& name) const {
    auto it = vars.find(name);
    if(it != vars.end())
        return it->second;
    throw std::runtime_error("Variable no definida: " + name);
}

bool Variables::exists(const std::string& name) const {
    return vars.find(name) != vars.end();
}

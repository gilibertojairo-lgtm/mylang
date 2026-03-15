#ifndef COMMANDS_H
#define COMMANDS_H

#include "variables.h"
#include <string>

namespace Commands {
    void print(const std::string& arg, Variables& vars);
    void set(const std::string& arg, Variables& vars);
    void add(const std::string& arg, Variables& vars);
}

#endif

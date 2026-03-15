#ifndef VARIABLES_H
#define VARIABLES_H

#include <string>
#include <unordered_map>

class Variables {
public:
    void set(const std::string& name, int value);
    int get(const std::string& name) const;
    bool exists(const std::string& name) const;

private:
    std::unordered_map<std::string,int> vars;
};

#endif

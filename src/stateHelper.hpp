#include <iostream>
#include <algorithm>
class StateHelper{
public:

    StateHelper() = delete;

    static std::string eraseSpaces(std::string context){
        while (std::find(context.begin(), context.end(), ' ') != context.end()){
            context.erase(std::find(context.begin(), context.end(), ' '));
        }
        return context;
    }

    static std::string extract(const std::string& states) {
        std::string executedValue = states.substr(0, 9);
        return executedValue;
    }

    static std::string cut(std::string& states){
        states.erase(0, 10);
        return states;
    }

};
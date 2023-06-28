#include "resolver.hpp"
#include "IOworker.hpp"
#include "stateHelper.hpp"

int main(){
    std::string context = IOworker::readFile("ttt.in");
    context = StateHelper::eraseSpaces(context);
    while (!context.empty()){
        IOworker::writeToFile("ttt.out", Resolver::resolve(StateHelper::extract(context)));
        StateHelper::cut(context);
    }
}
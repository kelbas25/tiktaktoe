#include "resolver.hpp"
#include "stateStack.hpp"

 void writeToFile(const std::string& filename, const std::string& res){
    std::ofstream file;
    file.open(filename, std::ios::app);
    if (file.is_open()) {
        file << res;
        file.close();
    } else {
        throw std::runtime_error(std::string("Failed to open the file: ") + filename);
    }
}

int main(){
    StateStack stack;
    stack.readFromFIle("ttt.in");
    while (!stack.isEmpty()){
        writeToFile("ttt.out", Resolver::resolve(stack.getState()));
    }
}
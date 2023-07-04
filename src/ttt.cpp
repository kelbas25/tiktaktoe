#include "resolver.hpp"

std::unordered_map<std::string, std::string> Resolver::cache;


 void writeToFile(std::ofstream& file, const std::string& res){
    if (file.is_open()) {
        file << res;
    } else {
        throw std::runtime_error( "Failed to open the output file");
    }
}

int main(){
    std::ifstream input("ttt.in");
    if (input.is_open()){
        std::string line;
        std::ofstream output("ttt.out");
        while (std::getline(input, line)){
            State state(line);
            writeToFile(output, Resolver::resolve(state));
        }
        output.close();
    }else{
        throw std::runtime_error("Failed to open the input file");
    }
    input.close();

}
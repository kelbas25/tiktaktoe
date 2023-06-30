#include "resolver.hpp"

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
    std::ifstream file;
    std::string filename = "ttt.in";
    file.open(filename);
    if (file.is_open()){
        std::string line;
        while (std::getline(file, line)){
            State state(line);
            writeToFile("ttt.out", Resolver::resolve(state));
        }
    }else{
        throw std::runtime_error(std::string("Failed to open the file: ") + filename);
    }
    file.close();

}
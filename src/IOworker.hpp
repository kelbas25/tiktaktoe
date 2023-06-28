#include <iostream>
#include <fstream>

class IOworker{
public:
    static std::string readFile(const std::string& filename){
        std::ifstream file;
        std::string context;
        file.open(filename);
        if (file.is_open()){
            std::string line;
            while (std::getline(file, line)){
                context += line;
            }
        }else{
            throw std::runtime_error(std::string("Failed to open the file: ") + filename);
        }
        file.close();
        return context;
    }
    static void writeToFile(const std::string& filename, const std::string& res){
        std::ofstream file;
        file.open(filename, std::ios::app);
        if (file.is_open()) {
            file << res;
            file.close();
        } else {
            throw std::runtime_error(std::string("Failed to open the file: ") + filename);
        }
    }

};
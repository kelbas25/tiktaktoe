#include <fstream>
#include "localizations.hpp"



std::unordered_map<std::string, std::string> Resolver::cache;
std::string Resolver::localization = "en";
std::string inputFile = "100_000.in";
std::string outputFile = "ttt.out";


void eraseSpaces(std::string& state){
    while (std::find(state.begin(), state.end(), ' ') != state.end()){
            state.erase(std::find(state.begin(), state.end(), ' '));
    }
}

int main(){
    std::ifstream input(inputFile);
    if (!input.is_open()){
        throw std::runtime_error(Resolver::getMessage("Input"));
    }

    std::vector<std::string> results;

    std::string line;
    while (std::getline(input, line)){
        eraseSpaces(line);

        // Check if the game state is already cached
        if(Resolver::cache.count(line)){
            results.push_back(Resolver::cache[line]);
        }else{
            results.push_back(Resolver::resolve(line));
        }

    }
    input.close();

    std::ofstream output(outputFile);
    if (!output.is_open()){
        throw std::runtime_error(Resolver::getMessage("Output"));
    }

    for (const auto& result : results){
        output << result;
    }
    output.close();

}
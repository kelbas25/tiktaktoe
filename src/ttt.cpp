#include <fstream>
#include <chrono>
#include "localizations.hpp"

std::unordered_map<std::string, std::string> Resolver::cache;
std::string Resolver::localization = "en";
std::string inputFile = "100_000_000.in";
std::string outputFile = "ttt.out";


void eraseSpaces(std::string& state){
    while (std::find(state.begin(), state.end(), ' ') != state.end()){
            state.erase(std::find(state.begin(), state.end(), ' '));
    }
}

int main(){
    auto start = std::chrono::high_resolution_clock::now();
    std::ifstream input(inputFile);
    std::vector<std::string> states;
    if (!input.is_open()){
        throw std::runtime_error(Resolver::getMessage("Input"));
    }
    std::string line;
    while (std::getline(input, line)){
        eraseSpaces(line);
        states.push_back(line);
    }
    input.close();

    std::vector<std::string> results;
    results.reserve(states.size());

    for (const auto& i : states){
        results.push_back(Resolver::resolve(i));
    }

    std::ofstream output(outputFile);
    if (!output.is_open()){
        throw std::runtime_error(Resolver::getMessage("Output"));
    }

    for (const auto& i : results){
        output << i;
    }
    output.close();

    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);
    std::ofstream writeDuration(inputFile + "caching.time");
    if (!writeDuration.is_open()){
        throw std::runtime_error(Resolver::getMessage("Output"));
    }
    writeDuration << "Time for file " << inputFile << " with cashing mechanism: " << duration.count() << " ms";
    writeDuration.close();
}
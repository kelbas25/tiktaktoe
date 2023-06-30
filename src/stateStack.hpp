#include <algorithm>
#include <iostream>
#include <fstream>

class StateStack{
public:
    StateStack() = default;
    explicit StateStack(const std::string& state) {
        this->states_ = state;
        this->eraseSpaces();
    }

    std::string getState(){
        if (this->isEmpty()){
            throw std::runtime_error("Stack is empty");
        }
        std::string extracted = this->states_.substr(0, 9);
        this->states_.erase(0, 10);
        return extracted;
    }


    void setStates(std::string& states){
        this->states_ = states;
        eraseSpaces();
    }

    void addStates(std::string& states){
        this->states_ += states;
        eraseSpaces();
    }

    void readFromFIle(const std::string& filename){
        std::ifstream file;
        file.open(filename);
        if (file.is_open()){
            std::string line;
            while (std::getline(file, line)){
                this->states_ += line;
                eraseSpaces();
            }
        }else{
            throw std::runtime_error(std::string("Failed to open the file: ") + filename);
        }
        file.close();
}
    bool isEmpty(){
        return this->states_.empty();
    }

private:
    void eraseSpaces(){
        while (std::find(states_.begin(), states_.end(), ' ') != states_.end()){
            states_.erase(std::find(states_.begin(), states_.end(), ' '));
        }
    }
    std::string states_;
};
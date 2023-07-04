#include <algorithm>
#include <iostream>
#include <fstream>

class State{
public:
    State() = default;
    explicit State(const std::string& state) {
        this->state_ = state;
        this->eraseSpaces();
        if (this->state_.length() != 9){
            throw std::runtime_error("Invalid game");
        }
    }


    char& operator[](std::size_t idx){
        return this->state_[idx];
    }

    auto begin(){
        return this->state_.begin();
    }

    auto end(){
        return this->state_.end();
    }
    std::string getState(){
        return state_;
    }


private:
    void eraseSpaces(){
        while (std::find(state_.begin(), state_.end(), ' ') != state_.end()){
            state_.erase(std::find(state_.begin(), state_.end(), ' '));
        }
    }

    std::string state_;
};
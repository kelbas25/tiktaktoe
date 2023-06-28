#include <iostream>

class Resolver{
public:
    Resolver() = delete;

    static std::string playerNumber(char& symbol){
        if (symbol == 'X'){
            return "First";
        }
        if (symbol == '0'){
            return "Second";
        }
        return "";
    }

    static std::string resolve(std::string state){
        if (state.length() < 9){
            throw std::runtime_error("Invalid game");
        }
        int balance = 0;
        for (auto i : state){
            if (i == 'X') ++balance;
            if (i == '0') --balance;
        }
        if (balance < -1 || balance > 1){
            throw std::runtime_error("Invalid game");
        }
        bool isEnded = true;
        std::string winner;
        for (auto i : state){
            if (i == '-'){
                isEnded = false;
            }
        }

        if (state[0] == state[1] && state[1] == state[2] && state[0] != '-') {
            isEnded = true;
            if (!winner.empty()){
                throw std::runtime_error("Invalid game");
            }
            winner = playerNumber(state[0]);
        }
        else if (state[3] == state[4] && state[4] == state[5] && state[3] != '-'){
            isEnded = true;
            if (!winner.empty()){
                throw std::runtime_error("Invalid game");
            }
            winner = playerNumber(state[3]);
        }
        else if (state[6] == state[7] && state[7] == state[8] && state[6] != '-'){
            isEnded = true;
            if (!winner.empty()){
                throw std::runtime_error("Invalid game");
            }
            winner = playerNumber(state[6]);

        }
        else if (state[0] == state[4] && state[4] == state[8] && state[0] != '-'){
            isEnded = true;
            if (!winner.empty()){
                throw std::runtime_error("Invalid game");
            }
            winner = playerNumber(state[0]);

        }
        else if (state[2] == state[4] && state[4] == state[6] && state[2] != '-'){
            isEnded = true;
            if (!winner.empty()){
                throw std::runtime_error("Invalid game");
            }
            winner = playerNumber(state[2]);
        }
        else if (state[0] == state[3] && state[3] == state[6] && state[0] != '-'){
            isEnded = true;
            if (!winner.empty()){
                throw std::runtime_error("Invalid game");
            }
            winner = playerNumber(state[0]);
        }
        else if (state[1] == state[4] && state[4] == state[7] && state[1] != '-'){
            isEnded = true;
            if (!winner.empty()){
                throw std::runtime_error("Invalid game");
            }
            winner = playerNumber(state[1]);
        }
        else if (state[2] == state[5] && state[5] == state[8] && state[2] != '-'){
            isEnded = true;
            if (!winner.empty()){
                throw std::runtime_error("Invalid game");
            }
            winner = playerNumber(state[2]);
        }
        if (isEnded) {
            if (!winner.empty()){
                return winner + " player wins\n";
            }else{
                return "Draw\n";
            }
        }
        else return "Game in progress\n";
    }

};


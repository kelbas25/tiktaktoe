#include "State.hpp"

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

    /**
 * Resolves the game state and determines the result.
 *
 * @param state The game state to resolve.
 * @return The result of the game state.
 * @throws std::runtime_error if the game state is invalid.
 */

    static std::string resolve(State state){
        // Check if the game state is already cached
        if(cache.count(state.getState())){
            if (cache[state.getState()] == "Invalid game"){
                throw std::runtime_error("Invalid game");
            }
            return cache[state.getState()];
        }

        // Define the winning combinations for the game
        const std::vector<std::vector<int>> winningCombinations = {
                {0, 1, 2}, {3, 4, 5}, {6, 7, 8},
                {0, 3, 6}, {1, 4, 7}, {2, 5, 8},
                {0, 4, 8}, {2, 4, 6}
        };

        bool isEnded = std::find(state.begin(), state.end(), '-') == state.end();
        std::string winner;

        // Check each winning combination
        for (auto combination : winningCombinations){
            bool isWinnerFound = state[combination[0]] == state[combination[1]] \
                            && state[combination[1]] == state[combination[2]] \
                            && state[combination[0]] != '-';
            if (isWinnerFound){
                if (!winner.empty()){
                    cache.insert({state.getState(),"Invalid game"});
                    throw std::runtime_error("Invalid game");
                }
                isEnded = true;
                winner = playerNumber(state[combination[0]]);
            }
        }

        std::string result;
        // Determine the final result based on game state and winner
        if (isEnded) {
            if (!winner.empty()){
                result = winner + " player wins\n";
            }else{
                result = "Draw\n";
            }
        }
        else {
            result = "Game in progress\n";
        }
        // Cache the result for future reference
        cache.insert({state.getState(),result});
        return result;
    }

private:
    static std::unordered_map<std::string, std::string> cache;
};


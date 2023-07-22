#include <iostream>
#include <algorithm>


class Resolver{
public:
    Resolver() = delete;

    static std::string playerNumber(char& symbol){
        if (symbol == 'X'){
            return Resolver::getMessage( "First");
        }
        if (symbol == '0'){
            return Resolver::getMessage( "Second");
        }
        return "";
    }

    /**
    * Resolves the game state and determines the result.
    *
    * @param state The game state to resolve.
    * @return The result of the game state.
    */

    static std::string resolve(std::string state){

        if (state.size() != 9){
            return Resolver::getMessage("InvalidGame");
        }

        int balance = std::count(state.begin(), state.end(), 'X') - std::count(state.begin(), state.end(), '0');
        if (balance < 0 || balance > 1){
            return Resolver::getMessage("InvalidGame");
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
                    cache.insert({state,Resolver::getMessage( "InvalidGame")});
                    return Resolver::getMessage( "InvalidGame");
                }
                isEnded = true;
                winner = playerNumber(state[combination[0]]);
                if (state[combination[0]] == 'X'){
                    if (balance <= 0) {
                        return Resolver::getMessage("InvalidGame");
                    }
                }
            }
        }

        std::string result;

        // Determine the final result based on game state and winner
        if (isEnded) {
            if (!winner.empty()){
                result = winner + Resolver::getMessage( "PlayerWins");
            }else{
                result = Resolver::getMessage( "Draw");
            }
        }
        else {
            result = Resolver::getMessage( "Progress");
        }

        // Cache the result for future reference
        cache.insert({state,result});
        return result;
    }

    /**
    * Change localization of output results
    *
    * @param language (only three languages is acceptable - "en", "ro", "ru")
    */

    static void setLanguage(const std::string& language){
        if (!Resolver::messages.count(language)){
            throw std::runtime_error(Resolver::getMessage("Localization"));
        }
        Resolver::localization = language;
    }

    /**
    * Getting localized output/exception message
    *
    * @param message is key for hash-table for message with current localization
    * @return localized output/exception message
    */

    static std::string getMessage(const std::string& message){
        return Resolver::messages[Resolver::localization][message];
    }

    static std::string localization;
    static std::unordered_map<std::string, std::unordered_map<std::string, std::string>> messages;
    static std::unordered_map<std::string, std::string> cache;
};


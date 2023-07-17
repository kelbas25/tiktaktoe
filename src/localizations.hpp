#include "resolver.hpp"

std::unordered_map<std::string, std::unordered_map<std::string, std::string>> Resolver::messages = {
        {"en", {
                       {"Input", "Failed to open the input file"},
                       {"Output", "Something wrong with output file"},
                       {"InvalidGame", "Invalid game\n"},
                       {"PlayerWins", " player wins\n"},
                       {"First", "First"},
                       {"Second", "Second"},
                       {"Progress", "Game in progress\n"},
                       {"Localization", "Localization for this language is unsupported"},
                       {"Draw", "Draw\n"}
               }},
        {"ru", {
                       {"Input", "Не удалось открыть файл для ввода данных"},
                       {"Output", "Что-то не так с файлом вывода"},
                       {"InvalidGame", "Некорректная игра\n"},
                       {"PlayerWins", " игрок побеждает\n"},
                       {"First", "Первый"},
                       {"Second", "Второй"},
                       {"Progress", "Игра не закончена\n"},
                       {"Localization", "Локализация для этого языка недоступна"},
                       {"Draw", "Ничья\n"}
               }},
        {"ro", {
                       {"Input", "Nu a putut deschide fisierul de intrare"},
                       {"Output", "Ceva in neregula cu fisierul de iesire"},
                       {"InvalidGame", "Joc invalid\n"},
                       {"PlayerWins", " jucator castiga\n"},
                       {"First", "Primul"},
                       {"Second", "Al doilea"},
                       {"Progress", "Joc in progres\n"},
                       {"Localization", "Localizarea pentru această limba nu este acceptata"},
                       {"Draw", "Egalitate\n"}
               }}
};

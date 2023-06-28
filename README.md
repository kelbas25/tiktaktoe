## Tic-Tac-Toe Game Architecture

The Tic-Tac-Toe game application consists of several components that work together to handle game resolution and IO operations. Let's explore the architecture of the application:

### Resolver Class
The `Resolver` class provides methods to resolve the Tic-Tac-Toe game state and determine the outcome. It includes the following static methods:
- `playerNumber(symbol)`: Returns the player number ("First" or "Second") corresponding to a given symbol ('X' or '0').
- `resolve(state)`: Takes a string representing the current game state and returns the result of the game. It checks for a valid game state, evaluates the symbol balance, checks for winning conditions, and determines the winner or if the game is still in progress.

### IOworker Class
The `IOworker` class handles file input and output operations for reading the game state from a file and writing the game result to another file. It includes the following methods:
- `readFile(filename)`: Reads the content of a file specified by the filename and returns it as a string.
- `writeToFile(filename, res)`: Appends the provided result string to a file specified by the filename.

### StateHelper Class
The `StateHelper` class provides helper methods to manipulate and extract information from the game state string. It includes the following methods:
- `eraseSpaces(context)`: Removes any spaces from the input string.
- `extract(states)`: Extracts the first game state (9 characters) from the provided string representing multiple game states.
- `cut(states)`: Removes the first game state from the provided string representing multiple game states.

### Main Function
The main function of the program coordinates the execution of the Tic-Tac-Toe game. It performs the following steps:
1. Reads the game states from the input file ("ttt.in") using `IOworker::readFile`.
2. Removes spaces from the input using `StateHelper::eraseSpaces`.
3. Iterates over the game states until there are no more states.
4. For each game state, it resolves the state using `Resolver::resolve`.
5. Writes the result to the output file ("ttt.out") using `IOworker::writeToFile`.
6. Cuts the processed game state using `StateHelper::cut`.

### Unit Tests
The code includes a set of unit tests written using the Google Test framework (`gtest/gtest.h`). These tests validate the correctness of the resolver logic by asserting the expected output for different game states. The test cases cover scenarios such as first player wins, second player wins, draw, game in progress, and invalid game state. Each test case uses `Resolver::resolve` and `StateHelper::eraseSpaces` to resolve the game state and compare the result with the expected outcome using assertions.

This architecture follows a modular design, with separate classes for resolving game states, handling IO operations, and manipulating game state strings. The main function coordinates the flow of execution, and the unit tests ensure the accuracy of the resolver logic.

# tiktaktoe

The given code represents a Tic-Tac-Toe game application. Let's break down its architecture into different components:

Resolver Class: This class is responsible for resolving the Tic-Tac-Toe game state and determining the outcome. It contains static methods to handle game resolution logic.

playerNumber: This method takes a symbol (either 'X' or '0') as input and returns the corresponding player number ("First" or "Second").
resolve: This method takes a string representing the current game state and returns the result of the game. It checks for a valid game state, evaluates the balance of symbols, checks for winning conditions, and determines the winner or if the game is still in progress.
IOworker Class: This class handles file input and output operations for reading the game state from a file and writing the game result to another file.

readFile: This method takes a filename as input, reads the content of the file, and returns it as a string.
writeToFile: This method takes a filename and a result string as input and appends the result to the file.
StateHelper Class: This class provides helper methods to manipulate and extract information from the game state string.

eraseSpaces: This method takes a string as input and removes any spaces from it.
extract: This method takes a string representing multiple game states and extracts the first game state (9 characters) from it.
cut: This method takes a string representing multiple game states and removes the first game state from it.
Main Function: The main function of the program coordinates the execution of the Tic-Tac-Toe game.

It reads the game states from the input file ("ttt.in") using IOworker::readFile.
It removes spaces from the input using StateHelper::eraseSpaces.
It iterates over the game states until there are no more states.
For each game state, it resolves the state using Resolver::resolve.
It writes the result to the output file ("ttt.out") using IOworker::writeToFile.
It cuts the processed game state using StateHelper::cut.
Unit Tests: The code also includes a set of unit tests written using the Google Test framework (gtest/gtest.h). These tests validate the correctness of the resolver logic by asserting the expected output for different game states.

The tests cover scenarios such as first player wins, second player wins, draw, game in progress, and invalid game state.
Each test case uses Resolver::resolve and StateHelper::eraseSpaces to resolve the game state and compare the result with the expected outcome using assertions (ASSERT_EQ and ASSERT_ANY_THROW).
Overall, the architecture of the Tic-Tac-Toe application follows a modular design, with separate classes for resolving the game state, performing input/output operations, and manipulating the game state string. The main function coordinates the flow of execution, while the unit tests ensure the correctness of the resolver logic.
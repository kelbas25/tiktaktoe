# Tic-Tac-Toe Resolver Application

This application provides a resolver for the game of Tic-Tac-Toe. It analyzes the current state of the game and determines the outcome, whether it is a win for the first player, a win for the second player, a draw, or if the game is still in progress.

## Architecture

The application consists of the following components:

1. **Resolver**: The `Resolver` class contains static methods for resolving the Tic-Tac-Toe game. It has the following responsibilities:
    - Determining the player number based on the symbol ('X' or '0').
    - Verifying the validity of the game state.
    - Checking for a win or draw condition.
    - Returning the appropriate result based on the game state.

2. **StateStack**: The `StateStack` class represents a stack of game states. It manages the game states and provides operations for retrieving, setting, and adding states. It also supports reading game states from a file. The class ensures that the game states are free from unnecessary spaces.

3. **Main Program**: The main program executes the resolver on a set of game states read from an input file. It utilizes the `StateStack` and `Resolver` classes to resolve each game state and writes the results to an output file.

## Advantages of an Extensible Architecture

The extensible architecture of this Tic-Tac-Toe resolver application offers several advantages:

1. **Modularity**: The application is divided into separate classes, each with its own responsibilities. This modular design allows for easier maintenance, debugging, and testing of individual components.

2. **Reusability**: The classes can be reused in other projects or extended to support additional functionalities. For example, the `Resolver` class can be utilized in a graphical user interface (GUI) implementation of Tic-Tac-Toe.

3. **Scalability**: The application can handle multiple game states by utilizing the `StateStack` class. It can easily accommodate an increasing number of game states without significant changes to the overall architecture.

4. **Separation of Concerns**: The responsibilities of reading game states, resolving game outcomes, and writing results are clearly separated into different classes. This separation allows for easier comprehension of each component's purpose and promotes maintainability.

5. **Testing and Debugging**: The application includes unit tests written using the Google Test framework (`gtest`). These tests ensure the correctness of the resolver and state stack implementations. The extensible architecture enables easy integration of new tests and facilitates efficient debugging.

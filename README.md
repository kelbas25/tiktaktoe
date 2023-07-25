# How to run in docker container

1. Install docker on your machine 
2. Run in terminal: 
```
    docker build -t ttt_game .
    docker run --rm -v $(pwd)/build:$/TTTgame/build ttt_game
```
# Application Architecture

The provided application is a Tic-Tac-Toe game resolver implemented in C++. It consists of several classes and functions that work together to determine the outcome of a Tic-Tac-Toe game based on the given game state.

## State Class

The `State` class represents the game state of Tic-Tac-Toe. It encapsulates a string representation of the current game state, where each character represents a cell on the game board. The class provides methods to access and modify the game state. Additionally, it performs validation to ensure that the game state has a valid format and length.

## Resolver Class

The `Resolver` class contains static methods responsible for resolving the Tic-Tac-Toe game based on a given game state. It analyzes the game state to determine if the game is in progress, has a winner, or ended in a draw. The class checks for winning conditions by examining the rows, columns, and diagonals of the game board. It also keeps track of the balance between the number of 'X' and '0' symbols to detect invalid game states.

The `Resolver` class provides a static method `resolve` that takes a `State` object as input and returns a string indicating the outcome of the game. 
## Unit Tests

The application also includes unit tests using the Google Test framework. The tests cover various scenarios to validate the correctness of the `Resolver` class. It tests cases where the first player wins, the second player wins, the game ends in a draw, the game is in progress, and an invalid game state is encountered. Additionally, there is a parameterized test suite that checks multiple game states and their expected resolutions.

The unit tests help ensure that the game resolver functions correctly in different scenarios and provides accurate results.

---

The extensible architecture of this application allows for easy modification and expansion. Here are some advantages of this architecture:

1. **Modularity**: The application is divided into separate classes, each responsible for a specific functionality. This modular design enables easy maintenance and understanding of the codebase. Developers can modify or enhance specific components without affecting other parts of the application.

2. **Code Reusability**: The classes `State` and `Resolver` are designed to be reusable. They can be utilized in other projects or scenarios that involve Tic-Tac-Toe game state management and resolution. The classes provide well-defined interfaces, allowing developers to integrate them into their applications effortlessly.

3. **Encapsulation**: The classes encapsulate their respective functionalities, providing clear separation of concerns. This encapsulation enhances code organization and readability. Developers can focus on individual components without worrying about interfering with other parts of the application.

4. **Flexibility**: The architecture allows for easy extension of the application's capabilities. For instance, if you want to add additional game rules or modify the winning conditions, you can extend the `Resolver` class and implement the desired logic without affecting the existing code. This extensibility enables the application to adapt and evolve according to changing requirements.

Overall, the extensible architecture of the application promotes maintainability, reusability, and flexibility. It provides a solid foundation for future enhancements, making it easier to extend the functionality of the Tic-Tac-Toe game resolver.

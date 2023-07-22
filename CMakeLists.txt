cmake_minimum_required(VERSION 3.25)
project(TTTgame)

set(CMAKE_CXX_STANDARD 20)


#Main target
add_executable(
        TTTgame
        src/ttt.cpp
        src/resolver.hpp
        src/localizations.hpp
)
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/lib/googletest-main")
include_directories(lib/googletest-main/googletest/include)
#Test target
add_executable(
        game_tests
        tests/gtests.cpp
)
target_include_directories(
        game_tests PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
)
target_link_libraries(
        game_tests PRIVATE
        gtest gtest_main
)




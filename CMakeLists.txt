cmake_minimum_required(VERSION 3.30)
project(cses)

set(CMAKE_CXX_STANDARD 20)

add_executable(cses main.cpp
        "dynamic programming/dice combinations.cpp"
        "dynamic programming/minimizing coins.cpp"
        "dynamic programming/coin combinations I.cpp"
        "dynamic programming/coin combinations II.cpp"
        "dynamic programming/Removing digits.cpp"
        "dynamic programming/grid paths I.cpp"
        "dynamic programming/Book Shop.cpp"
        "dynamic programming/array description.cpp"
        "Sorting and Searching/Distinct Numbers.cpp"
        "Sorting and Searching/Apartments.cpp"
        "Sorting and Searching/Ferris wheel.cpp"
        "Sorting and Searching/Concert tickets.cpp"
        "Sorting and Searching/Restaurants customers.cpp"
        "Sorting and Searching/movie festival.cpp")

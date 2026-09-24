cmake_minimum_required(VERSION 3.16)
project(TallerCorte2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 1. Ejercicio Twitter
add_executable(ejecutable_twitter 
    twitweeter_ejercicio.cpp
)

# 2. Ejercicio Spreadsheet
add_executable(ejecutable_spreadsheet 
    Spreadsheet.cpp
)

# 3. Ejercicio Queen Attack
add_executable(ejecutable_queen_attack 
    queen_attack.cpp 
    queen_attack.h
)

# 4. Ejercicio Robot Simulator
add_executable(ejecutable_robot_simulator 
    robot_simulator.cpp 
    robot_simulator.h
)
cmake_minimum_required(VERSION 3.16)

# Nombre del proyecto
project(robot-simulator LANGUAGES CXX)

# Estándar C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Habilitar soporte de pruebas
enable_testing()

# Ejecutable que compila el test junto con tu solución
add_executable(robot-simulator
    robot_simulator_test.cpp
    robot_simulator.cpp
    robot_simulator.h
)

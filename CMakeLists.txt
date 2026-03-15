cmake_minimum_required(VERSION 3.10)
project(miLenguaje VERSION 0.1 LANGUAGES CXX)

# Estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Carpeta de salida del ejecutable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Archivos fuente
set(SOURCES
    src/main.cpp
    src/parser.cpp
    src/commands.cpp
    src/variables.cpp
    src/utils.cpp
)

# Archivos header
include_directories(src)

# Crear ejecutable
add_executable(miLenguaje ${SOURCES})

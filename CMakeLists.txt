cmake_minimum_required(VERSION 3.10)
project(Triangulos)

# Configurar Catch2
include_directories(${CMAKE_SOURCE_DIR}/include)

# Archivo principal del estudiante
add_executable(triangulo triangulo.cpp)

# Archivo de pruebas
add_executable(tests test.cpp)

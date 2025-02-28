cmake_minimum_required(VERSION 3.10)
project(Triangulos)

# Configurar Catch2
add_library(Catch2 INTERFACE)
target_include_directories(Catch2 INTERFACE ${CMAKE_SOURCE_DIR}/include)

# Archivo principal del estudiante
add_executable(triangulo triangulo.cpp)

# Archivo de pruebas
add_executable(tests test.cpp)
target_link_libraries(tests Catch2)

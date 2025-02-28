cmake_minimum_required(VERSION 3.14)
project(Triangulos)

# Descargar y configurar Catch2 automáticamente
include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.5.2 # Usa la última versión estable
)
FetchContent_MakeAvailable(Catch2)

# Archivo principal del estudiante
add_executable(triangulo triangulo.cpp)

# Archivo de pruebas
add_executable(tests tests/test.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2)

#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp" // Incluir catch.hpp desde la carpeta include/catch2
#include <sstream>
#include <string>
#include "triangulo.cpp" // Incluye el archivo del estudiante

TEST_CASE("Prueba de impresión de triángulos", "[triangulo]") {
    SECTION("Triángulo de altura 1") {
        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf()); // Redirigir cout a output

        imprimirTriangulo(1); // Llamar a la función del estudiante
        cout.rdbuf(oldCout);  // Restaurar cout

        REQUIRE(output.str() == "*\n");
    }

    SECTION("Triángulo de altura 3") {
        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        imprimirTriangulo(3);
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "*\n**\n***\n");
    }

    SECTION("Triángulo de altura 5") {
        stringstream output;
        streambuf* oldCout = cout.rdbuf(output.rdbuf());

        imprimirTriangulo(5);
        cout.rdbuf(oldCout);

        REQUIRE(output.str() == "*\n**\n***\n****\n*****\n");
    }
}

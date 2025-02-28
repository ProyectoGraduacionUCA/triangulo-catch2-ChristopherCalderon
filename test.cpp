#include <catch2/catch_all.hpp>
#include <sstream>
#include <string>

// Incluir el código del estudiante (sin .cpp)
void imprimirTriangulo(int altura);

TEST_CASE("Prueba de impresión de triángulos") {
    SECTION("Altura 1") {
        std::stringstream output;
        auto old_cout = std::cout.rdbuf(output.rdbuf());
        
        imprimirTriangulo(1);
        std::cout.rdbuf(old_cout);
        
        REQUIRE(output.str() == "*\n");
    }

    SECTION("Altura 3") {
        std::stringstream output;
        auto old_cout = std::cout.rdbuf(output.rdbuf());
        
        imprimirTriangulo(3);
        std::cout.rdbuf(old_cout);
        
        REQUIRE(output.str() == "*\n**\n***\n");
    }
}
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

#include "../puntaje.h"
#include "gtest/gtest.h"

// Escribir tests aca:

TEST(puntajeTest, NumeroMenor10) {
    // setup
    int n = 7;
    //exercise
    int result = puntaje(n);
    // check
    EXPECT_EQ(result,4);
}

TEST(puntajeTest, NumeroNegativo) {
    // setup
    int n = -6;
    //exercise
    int result = puntaje(n);
    // check
    EXPECT_EQ(result, -2 );
}

TEST(puntajeTest, CasoBorde) {
    // setup
    int n = 30;
    //exercise
    int result = puntaje(n);
    // check
    EXPECT_EQ(result, 40);
}

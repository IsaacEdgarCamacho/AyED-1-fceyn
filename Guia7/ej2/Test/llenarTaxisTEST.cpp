#include "../llenarTaxis.h"
#include "gtest/gtest.h"

// Escribir tests aca:

//El test no pasa porque llenartaxis1 retorna 4 en lugar
//de 3 de manera uqe no devuelve la minima cantidad de taxis
    int g1 = 1,
        g2 = 1,
        g3 = 1;
    int espect = 2;
TEST(test1, llenarTaxis1) {
    // setup
    //exercise
    int result = llenarTaxis1(g1,g2,g3);
    // check
    EXPECT_EQ(result,espect);
}

TEST(test2, llenarTaxis2) {
    // setup
    //exercise
    int result = llenarTaxis2(g1,g2,g3);
    // check
    EXPECT_EQ(result,espect);
}


TEST(test3, llenarTaxis3) {
    // setup
    //exercise
    int result = llenarTaxis3(g1,g2,g3);
    // check
    EXPECT_EQ(result,espect);
}

#include "catch.hpp"

#include "myvector.h"
#include <iostream>

TEST_CASE("constructor")
{
    mystd::myvector<int> mv(10, 777);
    std::cout << "index, val = (" << 5 << ", " << mv[5] << ")" << std::endl;
    REQUIRE(mv.size() == 10);
    REQUIRE(mv[0] == 777);
    REQUIRE(mv[9] == 777);

    auto mv2(mv);
    std::cout << "index, val = (" << 5 << ", " << mv2[5] << ")" << std::endl;

    mystd::myvector<int> mv3;
    mv3 = mv;
    std::cout << "index, val = (" << 5 << ", " << mv3[5] << ")" << std::endl;

    mystd::myvector<int> mv4 = std::move(mv3);
    //std::cout << "index, val = (" << 5 << ", " << mv3[5] << ")" << std::endl; // error!
}

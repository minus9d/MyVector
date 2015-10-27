#include "catch.hpp"

#include "myvector.h"
#include <iostream>

TEST_CASE("constructor")
{
    mystd::myvector<int> mv(10, 777);
    REQUIRE(mv.size() == 10);
    REQUIRE(mv[0] == 777);
    REQUIRE(mv[9] == 777);

    auto mv2(mv);
    REQUIRE(mv.size() == mv2.size());
    REQUIRE(mv[0] == mv2[0]);
    REQUIRE(mv[9] == mv2[9]);

    mystd::myvector<int> mv3;
    mv3 = mv;
    REQUIRE(mv.size() == mv3.size());
    REQUIRE(mv[0] == mv3[0]);
    REQUIRE(mv[9] == mv3[9]);

    mystd::myvector<int> mv4 = std::move(mv3);
    REQUIRE(mv4.size() == 10);
    REQUIRE(mv4[0] == 777);
    REQUIRE(mv4[9] == 777);
}

#include "myvector.h"
#include <iostream>

void func(int n)
{

}

int main(void)
{
    mystd::myvector<int> mv(10, 777);
    std::cout << "index, val = (" << 5 << ", " << mv[5] << ")" << std::endl;

    auto mv2(mv);
    std::cout << "index, val = (" << 5 << ", " << mv2[5] << ")" << std::endl;

    mystd::myvector<int> mv3;
    mv3 = mv;
    std::cout << "index, val = (" << 5 << ", " << mv3[5] << ")" << std::endl;

    return 0;
}

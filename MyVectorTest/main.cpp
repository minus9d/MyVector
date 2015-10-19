#include "myvector.h"
#include <iostream>


int main(void)
{
    mystd::myvector<int> mv(10, 777);
    std::cout << "index, val = (" << 5 << ", " << mv[5] << ")" << std::endl;

    return 0;
}

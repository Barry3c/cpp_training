#include <iostream>
#include "helper.h"
#include "test.h"


int main()
{
    std::cout<<"hello world!!"<<std::endl;
    //todo: use gtest in future
    test::test();
    std::cout<<"end"<<std::endl;
    return 0;
}

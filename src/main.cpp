#include <iostream>
//#include "testList.h"

namespace helper
{ 
inline void printMarker(char l_char = '-', uint16_t l_len = 80, std::string l_header = "")
{
    //todo: improvise later to accept char, len, header
    std::cout<<"------------------------------------------------------------------"<<std::endl;
}
    
//todo: use boost or any other logger later
void log_info(std::string message)
{
    std::cout<<"INFO:\t\t"<<message<<std::endl; 
}
void log_debug(std::string message)
{
    std::cout<<"DEBUG:\t\t"<<message<<std::endl;
}

void log_error(std::string message)
{
    std::cout<<"ERROR:\t\t"<<message<<std::endl;
}

void log_warning(std::string message)
{
    std::cout<<"WARNING:\t\t"<<message<<std::endl;
}

}//namespace helper

namespace test
{
    void test()
    {
        //TC_SMART_PTRS();               
    }
}
int main()
{
    std::cout<<"hello world!!"<<std::endl;
    //todo: use gtest in future
    test::test();
    std::cout<<"end"<<std::endl;
    return 0;
}

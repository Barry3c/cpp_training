#include "helper.h"

namespace helper
{ 
void printMarker(char l_char , uint16_t l_len , std::string l_header)
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

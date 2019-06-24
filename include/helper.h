#pragma once
#include<iostream>
#include<stdint.h>

namespace helper
{
void printMarker(char l_char = '-', uint16_t l_len = 80, std::string l_header = "");
void log_info(std::string message);
void log_debug(std::string message);
void log_error(std::string message);
void log_warning(std::string message);
}//namespace helper

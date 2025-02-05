#include "simpleLogger.h"
#include <iostream>


int errorLog(const char* file, const char* function, int line, const std::string& msg)
{
    std::cerr << "[" << file << "] [" 
        << function << "] [" 
        << line << "] "
        << msg << std::endl;

    return 1;
}

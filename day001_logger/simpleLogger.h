#ifndef SIMPLE_LOGGER_H
#define SIMPLE_LOGGER_H

#include <string>


int errorLog(const char* file, const char* function, int line, const std::string& msg);

#define LOG(msg) errorLog(__FILE__, __FUNCTION__, __LINE__, msg)


#endif 
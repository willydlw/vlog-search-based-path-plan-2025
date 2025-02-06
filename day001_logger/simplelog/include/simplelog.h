#ifndef SIMPLE_LOG_H
#define SIMPLE_LOG_H

#include <string_view>

#define SIMPLE_LOG_LEVEL_TRACE 0
#define SIMPLE_LOG_LEVEL_DEBUG 1
#define SIMPLE_LOG_LEVEL_INFO  2
#define SIMPLE_LOG_LEVEL_WARN  3
#define SIMPLE_LOG_LEVEL_ERROR 4
#define SIMPLE_LOG_LEVEL_FATAL 5
#define SIMPLE_LOG_LEVEL_OFF   6 


#if !defined(SIMPLE_LOG_ACTIVE_LEVEL)
    #define SIMPLE_LOG_ACTIVE_LEVEL  SIMPLE_LOG_LEVEL_INFO
#endif 


// Log level enum 
namespace level {
    enum level_enum : int {
        trace = SIMPLE_LOG_LEVEL_TRACE,
        debug = SIMPLE_LOG_LEVEL_DEBUG,
        info  = SIMPLE_LOG_LEVEL_INFO,
        warn  = SIMPLE_LOG_LEVEL_WARN,
        error = SIMPLE_LOG_LEVEL_ERROR,
        fatal = SIMPLE_LOG_LEVEL_FATAL,
        off   = SIMPLE_LOG_LEVEL_OFF,
        num_levels
    };
}

#define SIMPLE_LOG_LEVEL_NAME_TRACE std::string_view("trace", 5);
#define SIMPLE_LOG_LEVEL_NAME_DEBUG std::string_view("debug", 5);
#define SIMPLE_LOG_LEVEL_NAME_INFO  std::string_view("info", 4);
#define SIMPLE_LOG_LEVEL_NAME_WARN  std::string_view("warn", 4);
#define SIMPLE_LOG_LEVEL_NAME_ERROR std::string_view("error", 5);
#define SIMPLE_LOG_LEVEL_NAME_FATAL std::string_view("fatal", 5);
#define SIMPLE_LOG_LEVEL_NAME_OFF   std::string_view("off", 3);

#if !defined(SIMPLE_LOG_LEVEL_NAMES)
    #define SIMPLE_LOG_LEVEL_NAMES                                                  \
        {                                                                           \
            SIMPLE_LOG_LEVEL_NAME_TRACE, SIMPLE_LOG_LEVEL_NAME_DEBUG,               \
            SIMPLE_LOG_LEVEL_NAME_INFO, SIMPLE_LOG_LEVEL_NAME_WARN,                 \
            SIMPLE_LOG_LEVEL_NAME_ERROR, SIMPLE_LOG_LEVEL_NAME_FATAL,               \
            SIMPLE_LOG_LEVEL_NAME_OFF
        }
#endif 

#if !defined(SIMPLE_LOG_SHORT_LEVEL_NAMES)
    #define SIMPLE_LOG_SHORT_LEVEL_NAMES \
        { "T", "D", "I", "W", "E", "F", "O"}
#endif

namespace simplelogger{
    class SimpleLogger{
        public:

    

        private:
    };
}

#endif 
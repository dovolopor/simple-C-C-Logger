#pragma once

// Console color codes
#define C_Normal  "\x1B[0m"
#define C_Red  "\x1B[31m"
#define C_Green "\x1B[32m"
#define C_Yellow  "\x1B[33m"
#define C_Blue  "\x1B[34m"
#define C_Magenta  "\x1B[35m"
#define C_Cyan  "\x1B[36m"
#define C_White  "\x1B[37m"

#define LOG_LEVEL_PRODUCTION 0
#define LOG_LEVEL_LOG_ERROR 1
#define LOG_LEVEL_LOG_WARNING 2
#define LOG_LEVEL_LOG_INFO 3
#define LOG_LEVEL_LOG_DETAIL 4

#define LOG_LEVEL LOG_LEVEL_LOG_DETAIL

#if LOG_LEVEL >= LOG_LEVEL_LOG_ERROR
#define logError(msg, ...) printf(C_Red "Error in %s at line %d: " msg C_Normal "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#else
#define logError(msg, ...)
#endif

#if LOG_LEVEL >= LOG_LEVEL_LOG_WARNING
#define logWarning(msg, ...) printf(C_Yellow "Warning in %s at line %d: " msg C_Normal "\n", __FILE__, __LINE__, ##__VA_ARGS__)
#else
#define logWarning(msg, ...)
#endif

#if LOG_LEVEL >= LOG_LEVEL_LOG_INFO
#define logInfo(msg, ...) printf(C_Green msg C_Normal "\n", ##__VA_ARGS__)

#else
#define logInfo(msg, ...)
#endif

#if LOG_LEVEL >= LOG_LEVEL_LOG_DETAIL
#define logDetail(msg, ...) printf(msg "\n", ##__VA_ARGS__)
#else
#define logDetail(msg, ...)
#endif

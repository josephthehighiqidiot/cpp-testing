#pragma once
#include <string>
#include "io.h"
#ifdef _WIN32
    #define PLATFORM_CHAR 'w'
#elif __linux__
    #define PLATFORM_CHAR 'l'
#elif __unix__
    #define PLATFORM_CHAR 'u'
#elif __APPLE__
    #define PLATFORM_CHAR 'a'
#else
    #define PLATFORM_CHAR '?' // 'u' for unknown/default
#endif
class info
{
    public: 
    const char systemtype = PLATFORM_CHAR;
};
class systemctl
{
    public: 
    class console {
        public:
        void clear();
    };
};
#include <iostream>
#include <stdio.h> 
#include <string>
#include <fstream>
#include <chrono>
#include <thread>
// #include "framework.h"
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
    class console
    {
        void clear()
        {
            io io;
            info info;
            if (info.systemtype == 'w')
            {
                system("cls");
            }
            else if (info.systemtype == 'l')
            {
                system("clear");
            }
            else if (info.systemtype == 'u')
            {
                system("clear");
            }
            else if (info.systemtype == 'a')
            {
                system("clear");
            }
            else if (info.systemtype == '?')
            {
                system("clear");
            }
            else 
            {
                io.throwerror("systemctl.console.clear error info.systemtype dose not contain proper data");

            }
        }
    };

};
class io {
    public:
        void throwerror(std::string error)
        {
            if (error.length() > 41)
            {
                //somthing
            }
            else
            {
                for (int i = 1; i <= 10; i++)
                {
                    std::cout << std::endl;
                }
                std::cout << "---------------#!-ERROR START-!#---------------" << std::endl;
                for (int i = 1; i <= 10; i++)
                {
                    std::cout << "\\\\\\*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*///" << std::endl;
                }
                int spacesrequired = 41 - error.length();
                if (spacesrequired % 2 != 0)
                {
                    std::cout << ">>>" << spacesin((spacesrequired -1 ) / 2) << error << spacesin((spacesrequired - 1) / 2 + 1) << "<<<" << std::endl;
                }
                else
                {
                    std::cout << ">>>" <<  spacesin(spacesrequired / 2) << error << spacesin(spacesrequired / 2) << "<<<" << std::endl;
                }
                for (int i = 1; i <= 10; i++)
                {
                    std::cout << "///*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*\\\\\\" << std::endl;
                }
                std::cout << "----------------#!-ERROR END-!#----------------" << std::endl;
                for (int i = 1; i <= 10; i++)
                {
                    std::cout << std::endl;
                }
            }
            
        }
        void displaytest() {
            int i = 0;
            do
            {
            
            std::cout << spacesin(i) << "x x x x" << std::endl;
            std::cout << spacesin(i) << "x     x" << std::endl;
            std::cout << spacesin(i) << "x     x" << std::endl;
            std::cout << spacesin(i) << "x x x x" << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            system("clear");
            
            std::cout << spacesin(i) << "       " << std::endl;
            std::cout << spacesin(i) << "  x x  " << std::endl;
            std::cout << spacesin(i) << "  x x  " << std::endl;
            std::cout << spacesin(i) << "       " << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            system("clear");
            i++;
            }
            while (true);
        }
        std::string spacesin(int i)
        {
            if (i < 0) return "";
            return std::string(i, ' '); 
        }
};

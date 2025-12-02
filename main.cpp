#include <iostream>
#include <stdio.h> 
#include <string>
#include <fstream>
#include <chrono>
#include <thread>

#ifdef _WIN32
    #define PLATFORM_CHAR 'w'
#elif __linux__
    #define PLATFORM_CHAR 'l'
#else
    #define PLATFORM_CHAR 'u' // 'u' for unknown/default
#endif

class info
{  
    public:
    char systemtype = PLATFORM_CHAR;
};

class system
{
    public:
    class console
    {
        void clear()
        {
            info info;
            if (info.systemtype == 'w')
            {
                system(cls);
            }
            else if (info.systemtype == 'l')
            {
                system(clear);
            }
            else if (info.systemtype == 'u')
            {
                std::cout << "Placeholder";
            }
            
            else 
            {
                std::cout  << "system.console.clear error info.systemtype dose not contain proper data";

            }
        }
    };

};
class io {
    public:
        void throwerror(std::string error)
        {
            for (int i = 1; i == 10; i++)
            {
                std::cout << std::endl;
            }
            for (int i = 1; i == 10; i++)
            {
                std::cout << "\\\\\\*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*///" << std::endl;
            }
            int spacesrequired = 41 - error.length();
            if  (spacesrequired < 0)
            {
                // handle long errors
            }
            else if (spacesrequired % 2 != 0)
            {
                std::cout << spacesin((spacesrequired -1 ) / 2) << error << spacesin((spacesrequired - 1) / 2 + 1);
            }
            else
            {
                std::cout << spacesin(spacesrequired / 2) << error << spacesin(spacesrequired / 2);
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
            std::string spaces = "";
            for (int x = 0; x == i; i++);
            {
                spaces += " ";
            }
            return spaces;
        }
};

int main() {
    int int1 = 1;
    io io;
    io.displaytest();
    std::cout << "this is the memory value of int1:";
    std::cout << &int1;
    io.throwerror("test");
    return 0;
}
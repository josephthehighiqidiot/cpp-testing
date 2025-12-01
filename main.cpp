#include <iostream>
#include <stdio.h> 
#include <string>
#include <fstream>
#include <chrono>
#include <thread>
class io {
    public:
        void displaytest() {
            do
            {
                int i = 0;
            
            std::cout <<  << "x x x x" << std::endl;
            std::cout << "x     x" << std::endl;
            std::cout << "x     x" << std::endl;
            std::cout << "x x x x" << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            system("clear");
            
            std::cout << "       " << std::endl;
            std::cout << "  x x  " << std::endl;
            std::cout << "  x x  " << std::endl;
            std::cout << "       " << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            system("clear");
            i++;
            }
            while (true);
        }
        std::string input() {
            std::string data;
            std::cin >> data;
            return data;
        }
        void print(std::string data)
        {
            std::cout << data;
        }
        void println(std::string data)
        {
            std::cout << data << std::endl;
        }
        std::string spacesin(int i)
        {
            std::string spaces = ""
            for (int x = 1;, x == i, i++;);
            {
                spaces << " "
            }
        }
};

int main() {
    int int1 1;
    io io;
    io.println("Hello, World!");
    io.displaytest();
    io.print("this is the memory value of int1:");
    io.println(&int1);
    return 0
}
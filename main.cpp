#include <iostream>
#include <helptext.h>

int main(int argc, char const *argv[])
{

    if (argc < 2) {
        
        std::cerr << "Error\n";
        
    }
    else
    {
        std::cout << "Hallo\n" << argv[0];
    }
    return 0;
}

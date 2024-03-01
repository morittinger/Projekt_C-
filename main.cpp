#include <iostream>
#include <getopt.h>
//including of the help file that will be displayed
#include "header/helptext.h"

//function to put the help text in the console
void help() {
    puts(HELPTEXT);
    exit(0);
}

//longopts structure which is used to use long operators as commands
struct option longopts[] = {
    //input: help, no argument is needed and safe as char 'h';
    {"help", no_argument, NULL, 'h'},
    {0, 0, 0, 0}
};

int main(int argc, char *argv[])
{
    //only start programm if user input is available 
    if(argc < 2) {
        std::cerr << "Error\n";
    }
    else {
        //Set variables for the option char and index
        int option;
        int index;
        //Loop for checking each command that is given by the user
        while ((option = getopt_long(argc, argv, "h", longopts, &index)) != -1) {
            std::cout << option << "\n";
            switch (option)
            {
            case 'h':
                help();
                break;
            
            default:
                std::cerr << "invalid Input\n";
                break;
            };
        };
    }
    return 0;
}

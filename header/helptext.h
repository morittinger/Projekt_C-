class Command {
    public:
        
    bool checkInput(std::string opt, char o, std::string command) {
        bool validInput = false;
        std::string option = "";
        option = o;
        std::cout << option << "\n";
        if(opt == "-" + option || opt == command) {
            validInput = true;
            return validInput;
        }
        else return validInput;
    }

};

class Help : public Command {
    public:
        const char * const HELPTEXT = { 
            "+--------programm help-------+\n"
            "Welcome to the help overlay!\n"
            "..."
            };

    void help() {
        puts(HELPTEXT);
        exit(0);
    }
};


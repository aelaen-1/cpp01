#include "Harl.hpp"

int main (int ac, char **argv)
{
    if (ac != 2)
        return (std::cout << "One argument only:  ./harlFilter 'message'" << std::endl, 0);
    Harl    harl;
    
    harl.msg = harl.setType(argv[1]);
    switch (harl.msg)
    {
        case DEBUG:
            harl.complain("DEBUG");
            break;
        case INFO:
            harl.complain("INFO");
            break;
        case WARNING:
            harl.complain("WARNING");
            break;
        case ERROR:
            harl.complain("ERROR");
            break;
        default:
            harl.complain("");
            break;
    }
    return (0);
}
#include <fstream>
#include <iostream>
#include <elf.h>
#include "parser/elf_parser.h"



int main(int argc, char *argv[]) {
    if (argc < 3) {
        // TODO printhelp        
    }
    std::ifstream file(argv[1], std::ios::binary); 
    if (!file) {
        std::cerr << "Unable to read file";
        return 1;
    }
    AppMode mode = get_mode(argc, argv);
    switch (mode)
    {
    case AppMode::Help:
        /* code */
        // TODO upd help func 
        break;
    case AppMode::All:
        // TODO upd all func
        break;
    case AppMode::Header: 
        //TODO upd header func
        break;
    case AppMode::Sections: 
        //TODO same shit
        break;
    case AppMode::Segments:
        break;
    case AppMode::Invalid:
        break;
    default:
        break;
    };
    
    return 0;
}

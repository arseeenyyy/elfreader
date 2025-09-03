#ifndef ARGPARSER_H
#define ARGPARSER_H

#include <string>
#include "arg_mode.h"

struct ProgramOptions {
    AppMode mode;
    std::string filename;
}; 

ProgramOptions parseArguments(int argc, char* argv[]);


#endif


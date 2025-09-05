#include <iostream>
#include <string>
#include "arg_parser.h"
#include "arg_mode.h"

ProgramOptions parse_arguments(int argc, char* argv[]) {
    ProgramOptions options;
    options.mode = AppMode::Invalid;
    options.filename = "";
    if (argc == 1) {
        options.mode == AppMode::Help;
        return options;
    }
    for (int i = 1; i < argc; i ++) {
        std::string arg = argv[i];
        if (arg[0] == '-') {
            if (arg == "-h" || arg == "-help") options.mode = AppMode::Help;
            else if (arg == "-a" || arg == "-all") options.mode = AppMode::All;
            else if (arg == "-s" || arg == "-sections") options.mode = AppMode::Sections;
            else if (arg == "-l" || arg == "segments") options.mode == AppMode::Segments;
            else {
                std::cout << "unknown option " << arg << "\n"; 
            }
        } else {
            options.filename = arg;
        }
    } 
    return options;
}

AppMode get_mode(int argc, char* argv[]) {
    
}
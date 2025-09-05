#ifndef ELFPARSER_H
#define ELFPARSER_H

#include "arg_parser.h"

void print_help(ProgramOptions options);

void parse_header(ProgramOptions options);

void parse_all(ProgramOptions options);

void parse_sections(ProgramOptions options);

void parse_segments(ProgramOptions options);


#endif


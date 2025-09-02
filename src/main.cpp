#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <elf_file>\n";
        return 1;
    }

    std::ifstream file(argv[1], std::ios::binary);
    if (!file) {
        std::cerr << "could not open file '" << argv[1] << "'\n";
        return 1;
    }

    std::cout << "file '" << argv[1] << "' opened successfully!\n";

    return 0;
}
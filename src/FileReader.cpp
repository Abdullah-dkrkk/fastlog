#include "FileReader.h"
#include <iostream>
#include <fstream>

std::ifstream file;

bool FileReader::openFile(const std::string& filename) {
    file.open(filename);
    if (!file.is_open()) {
        std::cout << "Error opening file!\n";
        return false;
    }
    return true;
}

void FileReader::readFile() {
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    file.close();
}

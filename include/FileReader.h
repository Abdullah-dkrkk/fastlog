#ifndef FILEREADER_H
#define FILEREADER_H

#include <string>

class FileReader {
public:
    bool openFile(const std::string& filename);
    void readFile();
};

#endif

#include <iostream>
#include "FileReader.h"

using namespace std;

int main() {
    FileReader reader;

    if (reader.openFile("data/sample.log")) {
        reader.readFile();
    }

    return 0;
}
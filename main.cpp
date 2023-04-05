#include <iostream>
#include <sstream>
#include "iostream"
#include "string"
#include "vector"
#include "fstream"

int main() {
    auto file = std::fstream("newFiles.txt");
    for (auto line = std::string(); std::getline(file, line); ) {
        {
            auto word = std::string();
            auto nameFile = std::string();
            auto stream = std::stringstream(line);

            stream >> nameFile;
            nameFile += ".txt";

            std::ofstream newFile(nameFile);

            while (stream >> word) {
                newFile << word << std::endl;
            }
        }
    }
    return 0;
}

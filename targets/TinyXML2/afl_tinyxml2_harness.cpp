#include <fstream>
#include <sstream>
#include <string>
#include "tinyxml2.h"

int main(int argc, char **argv) {
    if (argc < 2) return 1;

    std::ifstream file(argv[1], std::ios::binary);
    if (!file) return 1;

    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string data = buffer.str();

    if (data.size() == 0 || data.size() > 1024 * 1024) return 0;

    tinyxml2::XMLDocument doc;
    doc.Parse(data.c_str(), data.size());

    return 0;
}

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

int main(int argc, char** argv) {
    // create a vector of the argument strings
    // (argv[0] holds the program name, which doesn’t count)
    std::vector<std::string> args;
    for (int i = 1; i < argc; ++i) {
        args.push_back(argv[i]);
    }

    // sort the vector’s contents
    std::sort(args.begin(), args.end());

    // print the vector’s contents
    for (size_t i = 0; i != args.size(); ++i) {
        std::cout << args[i] << '\n';
    }
}
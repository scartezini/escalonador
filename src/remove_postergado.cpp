#include <sys/types.h>
#include <csignal>
#include <cstdlib>
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Sintaxe Obrigatoria: " << std::endl;
        std::cerr << "$ ./remove_postergado <id job>" << std::endl;
        exit(EXIT_FAILURE);
    }

    kill(atoi(argv[1]), SIGTERM);
    return 0;
}

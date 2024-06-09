#include <iostream>

#include <fmt/core.h>

#include <thread>

int main() {
    unsigned int available_cores = std::thread::hardware_concurrency();
    std::cout << fmt::format("Available cores: {0}", available_cores) << std::endl;
    return 0;
}

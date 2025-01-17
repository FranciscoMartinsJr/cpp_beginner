#include <cstdint>
#include <iostream>
#include "../include/code1_test.hpp"

char *txt = (char*)"Hi everyone!";

void test_code(void){
    std::printf("Hello world from C++!!!!!\n");
    std::printf("%s\n", txt);
}
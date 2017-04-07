/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  test1
 *
 *        Version:  1.0
 *        Created:  04/07/2017 02:33:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <iostream>
#include <string>

int main(void)
{
    std::cout << "Hello World!" << std::endl;
    std::string bla;
    bla = "jklfjsdklfjsd";
    bla = bla.substr(2, 3);
    std::cout << "bla = " << bla << std::endl;
    return 0;
}

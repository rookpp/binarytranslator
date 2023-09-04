#include <iostream>
#include "cases.hpp"
#include <string>
std::string CHARSET = "10011001 11011101";
int main()
{
    std::cout<<ArSize(CHARSET)<<std::endl;
    int len =  ArSize(CHARSET)/8;
    //int* COLLECTION = new int[len];
    std::cout<<ArSize(CHARSET)<<"/"<<len<<std::endl;

}
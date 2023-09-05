#include <iostream>
#include "cases.hpp"
#include <string>
//Example charset, will update to take custom user input when ready
std::string CHARSET = "10011001 11011101";
int main()
{
    if(ArSize(CHARSET)%8 !=0)
    {
        std::cout<<"ERROR: Invalid input"<<std::endl;
        return(EXIT_FAILURE);
    }
    
    
    
    int len =  ArSize(CHARSET)/8;
    //int* COLLECTION = new int[len];    
    
    //std::cout<<ArSize(CHARSET)<<"/"<<len<<std::endl;

}
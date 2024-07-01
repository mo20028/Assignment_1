#include <iostream>
#include <filesystem>

int main()
{
    try 
    {
        std::filesystem::path current_path = std::filesystem::current_path();
        std::cout<<current_path<<std::endl;
    }catch(std::filesystem::filesystem_error &e)
    {
        std::cerr<<"error :"<<e.what()<<std::endl;
        return -1;
    }
    return 0;
}
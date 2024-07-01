#include <iostream>

int main(int argc , char * argv[])
{

    // Loop through each argument and print it
    for (int i = 1; i < argc; ++i) {
        std::cout << argv[i]<<' ';
    }
    std::cout<<std::endl;

    return 0;
}
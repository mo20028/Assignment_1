#include <iostream>
#include <filesystem>

namespace fs= std::filesystem;

int main(int argc ,char *argv[])
{
    if(argc < 3)
    {
        std::cerr<<"syntax error: copy (source) (dest)"<<std::endl;
        return -1;
    }
    fs::path cur = fs::current_path();
    fs::path source = cur/argv[1];
    fs::path dest = cur/argv[2];

    if(fs::exists(source))
    {
        /* if dest is exist and file remove it before copy*/
        if(fs::exists(dest) && !(fs::is_directory(dest)))
        {
            fs::remove(dest);
        }
        fs::copy(source,dest);

        if(!(fs::remove(source)))
        {
            std::cerr<<"can't remove the source file"<<std::endl;
            return -3;
        }
    }
    else{
        std::cerr<<"source file don't exsist"<<std::endl;
        return -2;
    }

}
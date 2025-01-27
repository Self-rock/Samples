#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main(int argc, const char** argv) {

    fs::path path = ".";
    try
    {
        auto spaceInfo = fs::space(path);
        std::cout << "All capacyti "<<spaceInfo.capacity / (1024*1024) << "MB" << std::endl;
        std::cout << "Free space "<<spaceInfo.free / (1024*1024) << "MB" << std::endl;
        std::cout << "Available space "<<spaceInfo.available / (1024*1024) << "MB" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Error " << e.what() << '\n';
    }
    
    return 0;
}
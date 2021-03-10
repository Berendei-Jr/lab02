  #include <iostream>
    #include <string>

    int main (){
        std::string name;
        std::cin.ignore();
        std::getline(std::cin, name);
        std::cout << "Hello world from " << name << std::endl;
    }

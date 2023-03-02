include <iostream>
include <string>

int main() 
{
    string str; // name
    getline(std::cin, str); // read name
    std::cout << "Hello World from " << str;
    return 0;
}
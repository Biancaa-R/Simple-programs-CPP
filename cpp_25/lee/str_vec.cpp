#include <iostream>
#include <string>
#include <vector>
 
int main()
{
    std::string s = "Hello World!";
 
    std::vector<char> v(s.begin(), s.end());
 
    for (const char &c: v) {
        std::cout << c<<"\n";
    }
 
    return 0;
}
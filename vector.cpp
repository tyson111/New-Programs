#include <iostream>
#include <vector>

using namespace std;
int main()
{
    std::cout << "This is my test program..." << std::endl;

    std::vector<string> v {"Vishal","Amit","Sagar","Sachin"};

    for (auto a : v)
        cout << "Name is : " << a << endl;


}

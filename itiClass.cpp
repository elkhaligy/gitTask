#include <iostream>
using namespace std;

class HelloITI
{
    int id;
    public:
    void printHelloITI()
    {
        cout << "Hello ITI";
    }
    void printHelloGit()
    {
        cout << "Hello Git";
    }
    void setId(int id)
    {
        this -> id = id;
    }
};

int main()
{
    return 0;
}
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
    int getId()
    {
        return this -> id;
    }
};

int main()
{
    return 0;
}
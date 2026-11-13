#include <iostream>

using namespace std;

class Cat
{
    private:
        static int numofcats;
    public:
        static void getnumofcats()
        {
            cout<<numofcats<<endl;
        }
};
int Cat::numofcats = 10;
int main()
{
    Cat::getnumofcats();
    return 0;
}
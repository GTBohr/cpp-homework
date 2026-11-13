#include<iostream>

using namespace std;
class Student
{
    private:
        static int s;
        int t;
    public:
        Student()
        {
            ++s;
            t = s;
        }
        void Print()
        {
        cout<<"t:"<<t<<endl;
        cout<<"s:"<<s<<endl;
        }
};
int Student::s=0;

int main()
{
    Student s_1;
    s_1.Print();
    cout<<"----------"<<endl;
    Student s_2;
    s_1.Print();
    s_2.Print();
    cout<<"----------"<<endl;
    Student s_3;
    s_1.Print();
    s_2.Print();
    s_3.Print();
    cout<<"----------"<<endl;
    Student s_4;
    s_1.Print();
    s_2.Print();
    s_3.Print();
    s_4.Print();
    cout<<"----------"<<endl;
    
}
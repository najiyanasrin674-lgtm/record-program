#include<iostream>
using namespace std;

class student
{
    private:
    int rollno;
    string name;
    
    public:
    //constructors
    student(int r, string n)
    {
        rollno = r;
        name = n;
        cout<<" student object created"<<endl;
    }
    //member function
    void display()
    {
        cout<<"Roll Number:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
    }
    //destructor
    ~student()
    {
        cout<<"student object destroyed"<<endl;
    }
};
int main()
{
    student s1 (101, "Arun");
    s1.display();
    return 0;
}

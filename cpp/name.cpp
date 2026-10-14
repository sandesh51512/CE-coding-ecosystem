#include <iostream>
#include <string>
using namespace std;
class student
{
    public:
        string name;
        void display()
        {
            cout<<"student name:"<<name;
        }
};
int main(){
    student S1;
    S1.name= "SANDESH";
    S1.display();
    return 0;
}
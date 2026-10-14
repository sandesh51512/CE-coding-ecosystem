#include <iostream>
#include <string>
using namespace std;
class vehicle
{
    public:
       string plateno;
       string company;
       void getdata()
       {
        cout<<"enter plate no:";
        cin>>plateno;
        cout<<"enter company name:";
        cin>>company;
       }
       void displaydata()
       {
        cout<<"\n....VEHICLE INFORMATION...."<<endl;
        cout<<"plate no:"<< plateno <<endl;
        cout<<"company name:"<< company <<endl;
       }
};
int main()
{
    vehicle V1;
    V1.getdata();
    V1.displaydata();
    return 0;
}
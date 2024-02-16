#include<bits/stdc++.h>
using namespace std;

class database
{
    public:
    string emp_name;
    string emp_ID;
    float salary;
    string mob_no;
    database(string name,string id,string mob,float income)
    {
        emp_name=name;
        emp_ID=id;
        salary=income;
        mob_no=mob;
    }
};
int main()
{
    string name;
    cout<< "enter employee name: ";
    cin>> name;
    string id;
    cout<< "enter employee id: ";
    cin>> id;
    string mob;
    cout<< "enter mobile number: ";
    cin>> mob;
    float income;
    cout<< "enter income: ";
    cin>> income;
    database ash(name,id,mob,income);
    cout<< ash.emp_name<<"\n";
    cout<< ash.emp_ID<<"\n";
    cout<< ash.mob_no<<"\n";
    cout<< ash.salary<<"\n";
    return 0;
}
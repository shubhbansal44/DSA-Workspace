#include<bits/stdc++.h>
using namespace std;

class database
{
    public:
    void quote()
    {cout<< "\nActivate Synergy Of Thoughts.\n";}
    void founder()
    {cout<< "\nShubh Bansal\n";}
    vector<string> subjects={"Physics","Chemistry","Mathematics","Biology"};
    void covered()
    {cout<< "\nSubjects to be covered:\n";for(int i=0; i<subjects.size(); i++){cout<< i+1<<". "<<subjects[i]<<"\n";}}
};

int main()
{
    database ash;
    ash.quote();
    ash.founder();
    ash.covered();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int majority(const vector<int> &vect,int* max,int* fr)
{
    int u=0,k=1,f=1;
    for(int i=u+1; i<vect.size(); i++)
    {
        if(vect[u]==vect[i])
        {k++;}
        if(i==vect.size()-1)
        {
            if(k==*fr)
            {f++;}
            if(k>*fr)
            {*fr=k;*max=vect[u];}
            u++;k=1;i=u;
        }
    }
    return f;
}
int main()
{
    int n;
    cout<< "Enter number of elements: ";
    cin>> n;
    vector<int> vect(n);
    cout<< "Enter Elements: ";
    for(auto &p: vect)
    {
        cin>> p;
    }
    int max=vect[0],fr=1;
    int f=majority(vect,&max,&fr);
    if(f==1)
    {cout<< max<< " appeared "<< fr<< " times";}
    else{cout<< "Every element has same frequency!!";}
    return 0;
}
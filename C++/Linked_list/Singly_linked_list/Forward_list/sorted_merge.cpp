#include<bits/stdc++.h>
using namespace std;

void swap_node(auto x,auto y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

forward_list<int> merge(forward_list<int> l1,forward_list<int> l2)
{
    // forward_list<int> resultant;
    // auto a=l1.begin(),b=l2.begin(),ptr=resultant.before_begin();
    // while(a!=l1.end()&&b!=l2.end())
    // {
    //     if(*a<=*b){ptr=resultant.emplace_after(ptr,*a);a++;}
    //     else{ptr=resultant.emplace_after(ptr,*b);b++;}
    // }
    // while(a!=l1.end()){ptr=resultant.emplace_after(ptr,*a);a++;}
    // while(b!=l2.end()){ptr=resultant.emplace_after(ptr,*b);b++;}
    // return resultant;
/*--------------------------------------------------------------------------*/
    auto a=l1.begin(),b=l2.begin();
    while(a!=l1.end()&&b!=l2.end())
    {
        if(*a<*b){a++;}
        else if(*a==*b){a=l1.emplace_after(a,*b);a++;b++;}
        else{auto ptr=a;a=l1.emplace_after(a,*b);swap_node(ptr,a);b++;}
    }
    while(b!=l1.end()){a=l1.emplace_after(a,*b);b++;}
    return l1;
}

int main()
{
    forward_list<int> l1,l2;
    int a,b,n;
    cout<< "enter list 1 size: ";
    cin>> a;
    cout<< "enter list 1: ";
    auto ptr=l1.before_begin();
    for(int i=0; i<a; i++)
    {
        cin>> n;
        ptr=l1.emplace_after(ptr,n);
    }
    for (auto it = l1.begin(); it != l1.end(); ++it)
    cout << *it<< " ";
    ptr=l2.before_begin();
    cout<< "\nenter list 2 size: ";
    cin>> b;
    cout<< "enter list 2: ";
    for(int i=0; i<b; i++)
    {
        cin>> n;
        ptr=l2.emplace_after(ptr,n);
    }
    for (auto it = l2.begin(); it != l2.end(); ++it)
    cout << *it<< " ";
    l1=merge(l1,l2);
    cout<< "\nsorted merge of two list is: ";
    for (auto it = l1.begin(); it != l1.end(); ++it)
    cout << *it<< " ";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class dequeue
{
    public:
    deque<int> space;
    void insert_min(int x)
    {
        space.push_front(x);
    }
    void insert_max(int x)
    {
        space.push_back(x);
    }
    void delete_min()
    {
        space.pop_front();
    }
    void delete_max()
    {
        space.pop_back();
    }
    int get_min()
    {
        return space.front();
    }
    int get_max()
    {
        return space.back();
    }
};

int main()
{
    dequeue space;
    space.insert_max(10);
    space.insert_max(20);
    space.insert_max(30);
    space.insert_min(3);
    space.insert_min(1);
    cout<< space.get_max()<< " "<< space.get_min();
    return 0;
}
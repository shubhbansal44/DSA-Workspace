#include <iostream>
#include <string>

using namespace std;

class data
{
    public:
    int x;
    float y;
    string s;

    void prtls(data *ptr)
    {
        cout << ptr->x << " ";
        cout << ptr->y << " ";
        cout << ptr->s << "\n";
    }
};

int main()
{
    data arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i].x = i + 1;
        arr[i].y = i + 1.5;
        arr[i].s = "shubh bansal";
        arr[i].prtls(&arr[i]);
    }
    return 0;
}

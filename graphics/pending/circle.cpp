#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    char data[] = "D:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd,&gm,data);
    circle(300,300,50);

    getch();
    closegraph();
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    //int x;
    //int y;

    x=10;
    y=4;
    cout<<"x:"<<x<<" y:"<<y<<endl;

    x++; // x=x+1;
    y--; // y=y-1;
    cout<<"x:"<<x<<" y:"<<y<<endl;

    ++x; // x=x+1;
    --y; // y=y-1;
    cout<<"x:"<<x<<" y:"<<y<<endl;

    y=x++;
    cout<<"x:"<<x<<" y:"<<y<<endl;

    y=++x;
    cout<<"x:"<<x<<" y:"<<y<<endl;


    return 0;
}

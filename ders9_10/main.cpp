#include <iostream>

using namespace std;

int main()
{

    for(int x=10,y=3,z=2;(x>5 && y>0);x++,y--,z+=5)
    {
        cout<<"x:"<<x<<" y:"<<y<<" z:"<<z<<endl;
    }

    return 0;
}

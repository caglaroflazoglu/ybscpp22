#include <iostream>

using namespace std;

int main()
{
    int x=10;

    x=x+1;
    cout<<x<<endl;
    /*
    x+=1;
    cout<<x<<endl;

    x-=5;
    cout<<x<<endl;

    x*=2;
    cout<<x<<endl;
    */

    x%=3; // x=x%3;
    cout<<x<<endl;

    return 0;
}

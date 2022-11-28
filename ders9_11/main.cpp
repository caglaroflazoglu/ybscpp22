#include <iostream>

using namespace std;

int main()
{
    int x,x1,x2;

    x1=0;
    x2=1;

    cout<<x1<<"-"<<x2;

    for(int sayac=0;sayac<20;sayac++)
    {
        x=x1+x2;
        x1=x2;
        x2=x;
        cout<<"-"<<x2;
    }

    cout<<endl;
    return 0;
}

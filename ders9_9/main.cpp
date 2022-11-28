#include <iostream>

using namespace std;

int main()
{
    int x;

    for(x=0;x<10;x+=2)
    {
        cout<<"x:"<<x<<endl;
    }

    cout<<"----"<<endl;

    for(x=0;x<10;)
    {
        cout<<"x:"<<x<<endl;
        x+=2;
    }

    cout<<"----"<<endl;
    x=0;
    for(;x<10;)
    {
        cout<<"x:"<<x<<endl;
        x+=3;
    }

    cout<<"----"<<endl;
    x=0;
    for(;;)
    {
        cout<<"x:"<<x<<endl;
        x+=4;
        if(x>=20){
            break;
        }
    }
    return 0;
}

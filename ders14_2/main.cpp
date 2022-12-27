#include <iostream>

using namespace std;

void abc(int);

void xyz(int y)
{
    if(y>0){
        abc(y-1);
    }

}

void abc(int x)
{
    xyz(x-1);
    cout<<"x:"<<x<<endl;
}





int main()
{
    xyz(10);
    cout << "Hello world!" << endl;
    return 0;
}

#include <iostream>

using namespace std;

void yaz(int x)
{
    if(x>0)
    {
        yaz(x-1);
    }
    cout<<"x: "<<x<<endl;
}


int main()
{
    cout<<"fonksiyon oncesi"<<endl;
    yaz(3);
    cout<<"fonksiyon sonrasi"<<endl;
    return 0;
}

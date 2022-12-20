#include <iostream>

using namespace std;

void topla(int a, int b)
{
    cout<<"Islem: "<<a<<"+"<<b<<"="<<a+b<<endl;
}

int toplagetir(int a, int b)
{
    topla(a,b);
    return a+b;
}

int main()
{
    topla(2,3);
    topla(1,5);
    topla(9,20);

    int sonuc = toplagetir(10,20);
    cout<<"sonuc:"<<sonuc<<endl;

    return 0;
}

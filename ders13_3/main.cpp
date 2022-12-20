#include <iostream>

using namespace std;

float ucgenalan(int taban, int yukseklik)
{
    return taban*yukseklik*0.5;
}

float dairealan(int r)
{
    return 3.14*r*r;
}

float dortgenalan(int kenar1, int kenar2)
{
    return kenar1*kenar2;
}

int main()
{

    float sonuc1 = ucgenalan(10,20);
    float sonuc2 = dairealan(15);
    float sonuc3 = dortgenalan(40,20);

    cout<<"sonuc1: "<<sonuc1<<endl;
    cout<<"sonuc2: "<<sonuc2<<endl;
    cout<<"sonuc3: "<<sonuc3<<endl;


    cout<<"sonuc3: "<<dortgenalan(40,20)<<endl;

    dortgenalan(40,20);

    return 0;
}

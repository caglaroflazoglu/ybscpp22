#include <iostream>

using namespace std;

int main()
{
    float yaricap;

    cout<<"Yaricap:";
    cin>>yaricap;

    float cevre, alan, hacim;

    cevre=2*3.14*yaricap;
    alan=3.14*yaricap*yaricap;
    hacim = (4.0/3)*3.14*yaricap*yaricap*yaricap;

    //cout<<"Yaricap:"<<yaricap<<endl;
    cout<<"Cevre:"<<cevre<<endl;
    cout<<"Alan:"<<alan<<endl;
    cout<<"Hacim:"<<hacim<<endl;
    return 0;
}

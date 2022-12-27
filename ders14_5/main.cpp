#include <iostream>

using namespace std;

int main()
{
    int yatay, dusey;

    cout<<"Yatay: ";
    cin>>yatay;

    cout<<"Dusey: ";
    cin>>dusey;
    cout<<endl;

    for(int satir=0;satir<dusey;satir++)
    {
        for(int sutun=0;sutun<yatay;sutun++)
        {
            cout<<"*";
        }
        cout<<endl;
    }




    return 0;
}

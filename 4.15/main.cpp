#include <iostream>

using namespace std;

int main()
{
    float a=0,b=0;
    cout<<"Enter sales in dollars:";
    cin>>a;

    while (a!=-1)
    {
         b=200+a*0.09;
        cout<<"salary is:"<<b<<endl;
        cout<<"\nEnter sales in dollars"<<endl;
        cin>>a;


    }

    return 0;
}

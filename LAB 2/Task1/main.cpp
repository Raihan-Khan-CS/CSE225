#include <iostream>
#include"dynarr.h"

using namespace std;

int main()
{
    int in;
    dynArr d1();
    dynArr d2(5);

    for(int i=0;i<5;i++)
    {
        cout<<"Enter the array A["<<i<<"]: ";
        cin>>in;
        d2.setValue(i,in);
    }
    cout<<endl<<"Stored arrays are: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<< d2.getValue(i)<<" ";
    }
    return 0;
}

#include <iostream>
#include"dynarr.h"

using namespace std;

int main()
{
    int in,a;
    dynArr d1();
    dynArr d2(5);
    cout<<"Enter new size of Array: ";
    cin>>a;

    d2.allocate(a);

    for(int i=0;i<a;i++)
    {
        cout<<"Enter the array A["<<i<<"]: ";
        cin>>in;
        d2.setValue(i,in);
    }
    cout<<endl<<"The arrays are: "<<endl;
    for(int i=0;i<a;i++)
    {
        cout<< d2.getValue(i)<<" ";
    }
    d2.~dynArr();
    return 0;
}
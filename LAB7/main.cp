#include <iostream>
#include "stacktype.h"
using namespace std;

int main()
{
    StackType <float> s;
    cout<<"Enter the values of stack"<<endl;
    for(int i=0;i<10;i++)
    {
            float x;
            cin>>x;
            s.Push(x);
    }


    //TASK02
    for(int i=0;i<10;i++)
    {
            cout<<s.Top()<<" ";
            s.Pop();
    }
    return 0;
}


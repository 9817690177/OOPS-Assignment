#include<iostream>
using namespace std;
inline void print(int x)
{
        cout<<x<<" ";
}

int main()
{
        int i, y;
        cout<<"C++ Program to print first Natural numbers"<<endl<<endl;
        cout<<"Enter total number of natural numbers:"<<endl;
        cin>>y;
        for(i=1;i=y;i++)
        {
            print(i);
        }
        return 0;
}

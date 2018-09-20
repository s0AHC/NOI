#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b) 
        cout<<"First level"<<endl;
    else if(a<b)
            cout<<"second level"<<endl;
        else cout<<"third level"<<endl;         
}
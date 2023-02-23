#include<iostream>
using namespace std;

int main()

{
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"the greatest is ;" << endl;
            cout<<a<< endl;
        }
        else
             cout<<"the greatest is ;" << endl;
            cout<<c<< endl;
    }
    else
    {
        if(b>c){
             cout<<"the greatest is ;" << endl;
            cout<<b<< endl;
        }
        else{
             cout<<"the greatest is ;" << endl;
            cout<<c<< endl;
        }
    }
        return 0;


}
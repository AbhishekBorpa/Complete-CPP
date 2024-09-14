#include <iostream>
using namespace std;

int main(){
    // Basic ops; 


    int a = 10;
    int b = 20;
    int c = 14;
    int d = 15;
    int e = 16;
    int f = 17;
    int g = b%3;


    // cout<<c<<endl;
    // cout<<d<<endl;
    // cout<<e<<endl;
    // cout<<f<<endl;
    // cout<<g<<endl;

    // precendence(which ops to do first) and associativity(dir or order)

    int  result = (a+(b*(c/d))-(e*f));
    cout<<result<<endl;
    return 0;
}
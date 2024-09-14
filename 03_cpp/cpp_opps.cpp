#include <iostream>
#include <iomanip>
#include <ios>
#include <limits>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
    // Basic ops; 


    // int a = 10;
    // int b = 20;
    // int c = 14;
    // int d = 15;
    // int e = 16;
    // int f = 17;
    // int g = b%3;


    // // cout<<c<<endl;
    // // cout<<d<<endl;
    // // cout<<e<<endl;
    // // cout<<f<<endl;
    // // cout<<g<<endl;

    // // precendence(which ops to do first) and associativity(dir or order)

    // // int  result = (a+(b*(c/d))-(e*f));
    // // cout<<result<<endl;

    // // prefix(increment and decrement) and postfix( incre and decre)
    // // f =f+1 ;
    // cout<<++f<<endl;

    //  assignment operator
    //  comparison operator(<,>,<=,>=,!=,==)
    //  logical operator (and,or,not,xor)(&&,||,!)
    // bitwise operator

    // int ram = 10;
    // ram+= 1;
    // ram *=3;
    // ram%= 6;
    // cout<<ram<<endl;

    // output formatting


    std::cout<<"hello"<<std::endl; // new line and /n canbe used
    // std::flush<< ;    // show data of buffer
    std::cout<<std::setw(10) <<"hey"<<std::endl;  //std::right -> right justification
    // std::setfill
    // std::boolalpha; std::showpos;std::dec,oct,hex,std::scientific,fixed..

    // limits : min,mac,lowest for data-types
    std::cout<< std::numeric_limits<short>::min()  << " to " <<std::numeric_limits<short>::max();
    
    // math function
    // floar and ceil()
    int nam = 23.98;

    return 0;
}
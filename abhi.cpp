#include <iostream>
#include  <string>
using namespace std;
int abhi(int a,int b){
    int c = a+b;
    return c;
}

int mul(int c,int d){
    int m =  c*d;
    return m;
}
int main()
{
    std::cout<<"hey,what  are you doing"<<std::endl;
    std::cout << "Hello World" << std::endl;
    // single line code comment
    int first_num =10;
    int second_num = 20;
    // int sum = first_num+second_num;
    cout<<mul(10,20)<<endl;
    cout<<abhi(10,20)<<endl;
    /*
    multiline comment
    */
//    errors and warnings
/*
compile-time  error : syntax error,
runtime error :  logical error
warnings : can be problem


*/
//  statement and  functions

// std::cout : output <<
// std:cin : input >>
// std:cerr : print error message <<
// srd:clog : log message <<
string name;
cout<<"Enter Your Name:";
cin>> name;
    return 0;
}

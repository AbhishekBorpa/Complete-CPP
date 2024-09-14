// int,double,float,char,bool,void,auto 
// number system : binary , hexadecimal,
#include <iostream>
#include <iomanip>
using namespace  std;
int main(){
    int a=10;
    // signed int val1 = -5;
    unsigned int val1 = 5;
    // short,int,long,long long

    // long a =10;
    // long int b =10;
    // signed long int c =15;
    // unsigned long int d = 17;
    // long long int r = 18;
    // int vall2 = 5;
    std::cout<<sizeof(val1)<<std::endl;
    // std::cout<<a<<std::endl;

    // float and double;  for  precision
    float num1 = 1.2345f;
    float num2 =  1234.432f;
    double num3 = 3444.222222222222222;
    long double num4  = 345.543322344L;
    std::setprecision(3);
    cout<<num4<<endl;
    
    
    return 0;
}
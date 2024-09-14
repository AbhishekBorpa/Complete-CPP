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
    // float num1 = 1.2345f;
    // float num2 =  1234.432f;
    // double num3 = 3444.222222222222222;
    // long double num4  = 345.543322344L;
    // std::setprecision(3);
    // cout<<num4<<endl;
    


    // bool  : True and false
    // bool  red_light =true;

    // bool aa  = false;
    // bool bb = false;
    // cout<<sizeof(aa)<<endl;
    // if(aa==true){
    //     cout<<"hey"<<endl;

    // }else{
    //     cout<<"no"<<endl;
    // }

    // char ('a')  8  Bytes can include 256 values.

    char val = 65;
    string abhi = "abhishek singh is writting our new project code";
    cout<<abhi<<endl;
    cout<<val<<endl;






    // auto  : identify type automatically



    // auto val1 = 23;
    // auto val2 = 23.0f;
    // auto val3 = 'e';
    // cout<<val3<<endl;

    return 0;
}
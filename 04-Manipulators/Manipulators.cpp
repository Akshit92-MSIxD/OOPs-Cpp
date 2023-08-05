#include <iostream>
#include <iomanip>
using namespace std;
/// manupulators from <iomanip> header file and some from other header files of C++
/// [setw(),setfill(''),setprecison(),fixed,setbase() and much more..........]
int main()
{
cout<<setw(8)<<89<<endl;///setw() is used to set field width, iska concept to tu acche se jaanta hai vaise bhi..
cout<<setw(8)<<setfill('*')<<89<<endl;///setfill('') is used to fill character in  field spaces created by setw, if space left..
cout<<89.000<<"  "<<89.6700<<endl;///In C++,by default trailing zeroes are neglected in case of float,double etc...

cout<<setprecision(6)<<89.89876778<<endl;///setprecision() only used with float family no.s, used to give precision upto required significant digits, it includes both the
                                                                                                        ///significant digits of right and left side to the decimal point


cout<<89.87<<endl; ///89.87 is printed,although we have set the precision(6),this is due to because Compilers used in C++ did not use trailing zeroes , because they hate it.haha.
cout<<9.764573456<<endl;/// here output will be 9.76457 upto 6 signficant digits or figures;

cout<<fixed;///fixed is used to tell the compiler to give the precision after a decimal point now onwards,it works only in case of float family no.s .By default it fix the
///precision upto 6 digits after a decimal point like in C programming language.we can also used setprecison() with fixed in cout to set the precision upto required digits after
                                                                                                                                                               ///a decimal point.

cout<<89.84<<endl; /// so output will be 89.840000
cout<<67<<endl; /// so output will be 69.000000

cout<<fixed<<setprecision(8)<<58.98<<"  "<<6578.0<<endl;;/// as we can see here , we are getting precision upto 8 digits after a decimal point , and trailing zeroes are also
///included by compiler because of [fixed] manipulator we used..So , by changing the  argument inside setprecision() and using Fixed manupulator with it , we can get the
///desired precision after a decimal point.

cout<<scientific<<setprecision(5)<<50.073<<endl;; ///here 'scientific'is used to represent float family no.s in Scientific form. therefore output here is : 5.00730e+01
cout<<setbase(8)<<133<<" "<<setbase(16)<<134<<endl;;///setbase(base) is used to change the base of a no. or convert dec to hex/oct,hex to dec/oct,oct to hex/dec.. Does not work
                                                                                                                                                            ///on float type no.s
cout<<defaultfloat;///write floating-point values in default floating-point notation. This is the value by default (same as none, before any other floatfield bit is set).
cout<<78.00<<"  "<<78.98657499<<endl; ///fixed&scientific manipulator ka asar khatam hojaega Defaultfloat ko use krke , par setprecision() ka asar khatam ni hoga isse;

cout<<hex<<135<<" "<<oct<<89<<" "<<dec<<031<<" "<<dec<<0x41<<endl;/// hex,oct,dec are same as setbase(16)& setbase(8) & setbase(10) resp; and 031 is octal-no.,0x41 is hexadecmal
                                                                                              /// NOTE :: 031 shows that 31 is a octal  no. and 0x41 shows 41 is a hexadecimal no.
 cout<<hexfloat<<61.55<<endl;///'hexfloat' is used to show floating type values in hexadecimal format, as setbase(16)/hex manipulator only work in case of int decimal no.
}

/// All basics about Structures
#include <iostream>
#include <ios>
#include<limits>

using namespace std;


struct student
{
 char student_name[20];
 int student_id;
 char classroom[10];
};  /// Note - (;) symbol is important here., you can also declare variables here (before ;)

student input_func() /// TAKING INPUT IN A STRUCTURE VARIABLE
{
    student s;/// struct keyword is optional in C++.
    cin.getline(s.student_name,20);
    cin>>s.student_id>>s.classroom;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    return (s);
}


void st_print_func(student S) /// Structure elements print function
{
    cout<<S.student_name<<endl<<S.student_id<<endl<<S.classroom<<"\n\n";;
}

int main()
{
   // struct student s1={"Akshit Rawat",20011236,"10th-A"}; //one way of declaration and initialisation of variable of type student, struct is optional in C++.
   struct student s1;
    s1=input_func();
    st_print_func(s1);/// here this fuction is used to print the data present inside a variable s1 of type student;


     struct student s2;
    s2=input_func();///input_func() is used to take input value in structure variable s , and the structure variable s will be return finally.
                                                                                ///and its content will be copy to desired structure variable made by user.
                                /// return type of this fuction will be (student) as it is returing a structure.\(s2=s) here copies the content of s to s2.
    st_print_func(s2);


}



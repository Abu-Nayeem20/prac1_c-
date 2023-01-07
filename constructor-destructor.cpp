#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    string sName;
    int sId;
    int sAge;
    string fName;
    string mName;

    Student(string name, int id, int age, string fname, string mname)
    {
        sName = name;
        sId = id;
        sAge = age;
        fName = fname;
        mName = mname;
    }

    void print_info()
    {
        cout<<"Name: "<<sName<<endl;
        cout<<"Id: "<<sId<<endl;
        cout<<"Age: "<<sAge<<endl;
        cout<<"Father: "<<fName<<endl;
        cout<<"Mother: "<<mName<<endl;
    };
};

int main()
{

    Student s1("A", 10, 20, "B", "C");

    s1.print_info();


    return 0;
}

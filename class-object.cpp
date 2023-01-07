#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    string sName;
    int sId;
    int sAge;
    string fName;
    string mName;

    void print_info()
    {
        cout<<"Name: "<<sName<<endl;
        cout<<"Id: "<<sId<<endl;
        cout<<"Age: "<<sAge<<endl;
        cout<<"Father: "<<fName<<endl;
        cout<<"Mother: "<<mName<<endl;
    };
};

class Person{
public:
    string name;
    Person *father, *mother;

    void print_info()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Father: "<<father->name<<endl;
        cout<<"Mother: "<<mother->name<<endl;
    };

};

int main()
{
    Student s;
    s.sName = "Nayeem";
    s.sId = 123456789;
    s.sAge = 25;
    s.fName = "Latif";
    s.mName = "Anowara";

    s.print_info();

    Person p;
    p.father = new Person;
    p.mother = new Person;
    p.name = "X";
    p.father->name = "Y";
    p.mother->name = "Z";

    p.print_info();


    return 0;
}

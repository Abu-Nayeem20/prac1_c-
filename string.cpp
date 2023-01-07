#include<bits/stdc++.h>

using namespace std;

int main()
{
    // String Concat
    string s1 = "Hello World ";
    string s2 = "From My Desk!";
    string s = s1 + s2;

    //cout<<s<<endl;

    // Length

    int len = s1.size();
    cout<<len<<endl;

    // Remove last char

    s2.pop_back();
    cout<<s2<<endl;

    // Remove first char

    s1.erase(s1.begin());
    cout<<s1<<endl;

    // Remove any char

    s1.erase(s1.begin() + 5);
    cout<<s1<<endl;



    return 0;
}

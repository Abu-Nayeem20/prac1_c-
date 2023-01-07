#include<bits/stdc++.h>

using namespace std;

string erase_first_last(string &s)
{
    s.erase(s.begin());
    s.pop_back();

    return s;
}

void swap_func(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    string s = "ABCDE";
    //Before
    cout<<s<<endl;

    erase_first_last(s);
    //After
    cout<<s<<endl;

    int x = 5;
    int y = 7;
    //Before
    cout<< x << " " << y <<endl;

    swap_func(x,y);
    //After
    cout<< x << " " << y <<endl;


    return 0;
}

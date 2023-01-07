#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>a;

    // Add last element
    for(int i=0; i<10; i++)
    {
        a.push_back(i);
    }

    // Add first element

    a.insert(a.begin(), 100);

    // Add any element

    a.insert(a.begin() + 2, 200);

    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<endl;
    }

    // Remove last element
    a.pop_back();

    // Remove first element

    a.erase(a.begin());

    // Remove any element

    a.erase(a.begin() + 2);

    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<endl;
    }

    //a.resize(10);
    // Change vector size


    return 0;
}

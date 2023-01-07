#include<bits/stdc++.h>

using namespace std;

int main()
{
    // Swap function

    int x = 2, y = 5;
    cout<<x<<" "<<y<<endl;

    swap(x,y);
    cout<<x<<" "<<y<<endl;

    // Find min value

    int mini = min(x,y); // Multiple {a,b,c,d}
    cout<<mini<<endl;

    // Find max value

    int maxi = max(x,y); // Multiple {a,b,c,d}
    cout<<maxi<<endl;

    // Sorting

    vector<int>a = {7,6,1,4,2,5,3};

    // Before sort

    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    // Sort selected element

    sort(a.begin()+1, a.begin()+3);

    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";

    sort(a.begin(), a.end());

    // After sort

    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";





    return 0;
}

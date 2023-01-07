#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Enter 10 numbers\n";
    int nums[10];
    for(int i=1; i<=10; i++)
    {
        cin>>nums[i];
    }

    int sum = 0;

    for(int i =1; i<=10; i++)
    {
        sum += nums[i];
    }

    cout<<sum<<endl;



    return 0;
}

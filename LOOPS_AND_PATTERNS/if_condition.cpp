#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    int sum;
    int n;

    cin>>n;

    i = 1;
    sum = 0;

    while (i<=n)
    {
        sum = sum + i;
        cout<<sum<<endl;
        i = i+1;
    }
    cout <<sum ;



    return 0;
}

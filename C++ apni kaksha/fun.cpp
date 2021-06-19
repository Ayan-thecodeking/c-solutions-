#include <iostream>
#include <math.h>
using namespace std;

// int add(int n1, int n2){

//     int sum=n1+n2;
//     return sum;

// }
// int main(int argc, char const *argv[])
// {
//     int n1,n2;
//     int sum;
//     n1=4;
//     n2=6;

//     sum=add(n1,n2) ;

//     cout<<sum<<endl;

//     return 0;
// }

bool isprime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        return true;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i < b; i++)
    {
        if (isprime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}

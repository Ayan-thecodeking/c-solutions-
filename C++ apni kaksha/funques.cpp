
#include <iostream>
using namespace std;

// void fab(int num)
// {
//     int t1 = 0;
//     int t2 = 1;
//     int nextnum;
//     for (int i = 1; i <=num; i++)
//     {
//         cout<<t1<<endl;
//         nextnum=t1+t2;
//         t1=t2;
//         t2=nextnum;
//     }
//     return;
// }

// int main(int argc, char const *argv[])
// {
//     // fabonnaci series

//     int n;
//     cin >> n;

//     fab(n);

//     return 0;
// }

// factorial
// int fact(int n)
// {
//     int factorial = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = fact(n);

//     cout << ans << endl;
//     return 0;
// }

//  calculate ncr

// int fact(int n){
// int factorial=1;
// for (int i = 1; i <=n; i++)
// {
//     factorial*=i;
// }
// return factorial;
// }

// int main()
// {
//     int n;
//     int r;
//     cout << "give the numbers to calculate" << endl;
//     cin >> n >> r;

//     int nCr = fact(n) / (fact(n - r) * fact(r));

//     cout << nCr<< endl;

//     return 0;
// }

//    pascals triangle

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << fact(i) / (fact(i - j) * fact(j)) << " ";
        }
        cout << endl;
    }

    return 0;
}


// program to count the number of consonents numbers vowels
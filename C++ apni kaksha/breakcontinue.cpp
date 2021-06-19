#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int pocketmoney=3000;
    // for (int date=0;  date<=30; date++)
    // {
    //     if (date%2==0)
    //     {
    //         continue;
    //     }
    //     if (pocketmoney==0)
    //     {
    //        break;

    //     }

    //     cout<<"GO OUT TODAY"<<endl;
    //     pocketmoney=pocketmoney-300;
    // }

    // examples 2

    // for (int i = 0; i < 100; i++)
    // {
    //     if (i%3==0)
    //     {
    //         continue;
    //     }
    //     cout<<i<<endl;

    // }

    // examples 3

    // int n;
    // cin>>n;
    // int i;

    // for ( i = 2; i < n; i++)
    // {
    //     if (n%i==0)
    //     {
    //         cout<<"non prime"<<endl;
    //         break;
    //     }

    // }
    // if (i==n)
    // {
    // cout<<"prime number "<<endl;
    // }

    // examples 4

    int a, b;
    cin>> a >> b;
    for (int num = a; num < b; num++)
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << "non prime no" << endl;
                break;
            }
        }
        if (i == num)
        {
            cout << "prime" << endl;
        }
    }

    return 0;
}

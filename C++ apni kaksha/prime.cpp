#include <iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // check whether it is a prime no or not
    // int n;
    // int i;
    // cout << "enter the number " << endl;
    // cin >> n;

    // for (i = 2; i <n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "its not a prime number " << endl;
    //         break;
    //     }

    // }
    //     if (i == n)
    //     {
    //         cout << "its a prime number" << endl;
    //     }

    // reverse of number

    // int reverse=0,n,remainder ;
    // cout<<"enter the number "<<endl;
    // cin>>n;

    //  while (n>0)
    //  {
    //      remainder=n%10;
    //      reverse=reverse*10+remainder;
    //      n=n/10;
    //  }
    //  cout<<reverse <<" is the number"<<endl;

    // aarmstrong number

    int n;
    cin >> n;

    int sum = 0;
    // int orignum=n;

    while (n > 0)
    {
      int rem = n % 10;
        sum = sum + pow(rem, 3);
        n=n/10;
    }
    if (sum==n)
    {
        cout<<"armstrong number "<<endl;
        
    }
    else{
        cout<<" not an armstrong number "<<endl;
    }
    

    return 0;
}

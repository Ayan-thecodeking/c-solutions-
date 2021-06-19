#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int i = 1;
    // int j = 2;
    // int k;

    // k = i + j + i++ + j++ + ++i + ++j ;

    // cout<< i<<" "<<j<<" "<<k<<endl;

    // int i=0;
    //  // 0      0     1    1
    // i= i++ - --i + ++i - i--;
    //     cout<< i<<endl;

    //   int i=1;
    //   int j=2;
    //   int k=3;
    //   //   1     2    3
    //   int m= i-- - j-- - k--;

    int i = 10;
    int j = 20;
    int k;
    //  10    9     19    20    9     20    10    19 
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
                                                 // 20
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;

    
    return 0;
}

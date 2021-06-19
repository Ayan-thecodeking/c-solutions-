
#include <iostream>
using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     int array[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }

//     int maximum = array[0];
//     int minimum = array[0];

//     for (int i = 0; i < n; i++)
//     {
//         if (minimum < array[0])
//         {
//             minimum = array[i];
//         }
//         if (maximum > array[i])
//         {
//             maximum = array[i];
//         }
//     }
//     cout << "min " << minimum << endl;
//     cout << "max " << maximum << endl;
//     return 0;
// }

// searching in arrays

// int  search(int array[],int n ,int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (array[i]==key)
//         {
//             return i;
//         }

//     }
//     return -1;
// }
// int main(){

//     int n;
//     cin>>n;
//     int array[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>array[i];
//     }

//     int key;
//     cin>>key;
//     cout<<search(array,n,key)<<endl;

//     return 0;
// }

// time complexity of linear search is o{n}  ----------------


// ------------------------------------------------------------------------------------------------------

// binary search always in increasing form 


int binarysearch(int array[], int n, int key)
{
    int s = 0;
    // start
    int e = n;
    // end

    while (s <= n)
    {
        int mid = (s + e) / 2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{

    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cin >> key;

    cout << binarysearch(array, n, key) << endl;

    return 0;
}
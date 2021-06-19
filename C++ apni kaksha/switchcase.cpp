#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // char button;
    // cout<<"input a character "<<endl;
    // cin >> button;

    // switch (button)
    // {
    // case 'a':
    //     cout << "hello" << endl;
    //     break;
    // case 'b':
    //     cout << "hola" << endl;
    //     break;
    // case 'c':
    //     cout << "salut" << endl;
    //     break;
    // case 'd':
    //     cout << "hii" << endl;
    //     break;
    // case 'e':
    //     cout << "namaste" << endl;
    //     break;

    // default:
    //     cout << "learning lot more!" << endl;

    //     break;
    // }

    // arthematic operation

    float n1, n2;
    
    cout<<"input 2 numbers "<<endl;
    cin>>n1>>n2;

    char opp;
    cout<<"input an operator "<<endl;
    cin>>opp;

    switch (opp)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
        cout<<"enter another opera"<<endl;
        break;
    }


    return 0;
}

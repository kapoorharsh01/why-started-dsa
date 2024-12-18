#include <iostream>
using namespace std;

int main()
{

    // int score;
    // cout<<"Enter the score "<<endl;

    // cin>>score;

    // if(score < 300) cout<<"India wins\n";

    // cout<<"England wins";

    // int broNum;
    // cout<<"Enter the No. of Brothers"<<endl;
    // cin>>broNum;

    // if(broNum == 0) cout<<"Bat ban jayegi";

    // else cout<<"Bat ni banegi";

    // int num;
    // if (cin >> num)
    //     cout << "Here's the number " << num << endl;
    // if (cout << "Kapoor\n")
    // {
    //     cout << "Harsh";
    // }

    // Patterns

    // 1. Solid Rectangle
    // for (int row = 0; row < 3; row += 1)
    // {

    //     for (int col = 0; col < 5; col += 1)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // another approach  : col wise not possible
    // goto keyword a bad practice
    // 2. Solid Square
    for (int row = 0; row < 4; row += 1)
    {
        for (int col = 0; col < 4; col += 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
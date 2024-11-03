#include <iostream>
// #include <locale>
using namespace std;

// SQUARE PATTERN 1
//  Enter any Number: 3
//  A B C
//  A B C
//  A B C
/*int main()
{
    int n ;
    cout << "Enter any Number: ";
    cin >> n;
    // outer loop tells at which line we are
    // inner loop tells what to do in that line

    for (int i = 0; i < n; i++){
        char ch = 'A';
        for (int j = 0; j < n; j++){    //inner start => line start
            cout << ch << " ";
            ch = ch+1;  //type conversion is implicit
            // char + int
            // 65 + 1 => 66 -> B
        }
        cout  << endl;
    }

    return 0;
}*/

// SQUARE PATTERN 2
//  Enter any Number: 4
//  A B C D
//  E F G H
//  I J K L
//  M N O P
/*int main()
{
    int n ;
    cout << "Enter any Number(less than 6 but greater than 0): ";
    cin >> n;

    // int num = 1;
    char ch = 'A';
if (n > 0 && n <= 5)
{
    for (int i = 0; i < n; i++){
        //we are not putting ch here bcoz then the ch value again gets equal to A
        for (int j = 0; j < n; j++){
            cout << ch << " ";
            ch = ch + 1;
        }
        cout  << endl;
    }
}
else{
    cout << "Enter any Number between 0 & 6 only!\n";
}



    return 0;
}*/

// TRIANGLE PATTERN 1
//  Enter any Number: 4
//  *
//  **
//  ***
//  ****
/*int main()
{
    int n ;
    cout << "Enter any Number: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            char ch = '*';
            cout << ch;
        }
        cout << endl;
    }


    return 0;
}*/

// TRIANGLE PATTERN 2
//  Enter any Number: 4
//  A
//  BB
//  CCC
//  DDDD
/*int main()
{
    int n ;
    cout << "Enter any Number: ";
    cin >> n;

    char ch = 'A';

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << ch;
        }
        ch=ch+1;
        cout << endl;
    }

    return 0;
}*/

// TRIANGLE PATTERN 3
//  Enter any Number: 4
//  1
//  12
//  123
//  1234
/*int main()
{
    int n ;
    cout << "Enter any Number: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 1; j <= i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}*/

// TRIANGLE PATTERN 4: Reverse Triangle Pattern
//  Enter any Number: 4
//  1
//  2 1
//  3 2 1
//  4 3 2 1
/*int main()
{
    int n ;
    cout << "Enter any Number: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = i+1; j >= 1; j--){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}*/

// TRIANGLE PATTERN 5: Floyd's Triangle Pattern
//  Enter any Number: 4
//  1
//  2 3
//  4 5 6
//  7 8 9 10
/*int main()
{
    int n ;
    cout << "Enter any Number: ";
    cin >> n;

    int a = 1;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << a++ << " ";
        }
        cout << endl;
    }

    return 0;
}*/

// TRIANGLE PATTERN 6: Inverted Triangle Pattern(for numbers)
//  Enter any Number: 5
//  11111
//   2222
//    333
//     44
//      5
/*int main()
{
    int n ;
    cout << "Enter any Number: ";
    cin >> n;

    for (int i = 0; i < n; i++){

        for (int s = 0; s < i; s++)
        {
            cout << " ";
        }


        for (int j = 0; j < n-i; j++){
            cout << i+1;
        }
        cout << endl;
    }

    return 0;
}*/

// TRIANGLE PATTERN 6: Inverted Triangle Pattern(for characters)
//  Enter any Number: 5
//  AAAAA
//   BBBB
//    CCC
//     DD
//      E
/*int main()
{
    int n ;
    cout << "Enter any Number: ";
    cin >> n;

    char ch = 'A';

    for (int i = 0; i < n; i++){

        for (int s = 0; s < i; s++)
        {
            cout << " ";
        }


        for (int j = 0; j < n-i; j++){
            cout << ch;
        }
        ch=ch+1;
        cout << endl;
    }

    return 0;
}*/

// PYRAMID PATTERN(for numbers)
//  Enter any Number: 4
//     1
//    121
//   12321
//  1234321
/*int main()
{
    int n ;
    cout << "Enter any Number: ";
    cin >> n;

    for (int i = 1; i <= n; i++){

        for (int j = 0; j < n-i; j++){
            cout << " ";
        }

        for (int j = 0; j < i; j++){
            cout << j+1;
        }

        for (int j = 1; j < i; j++){
            cout << i-j;
        }

        cout << endl;
    }
    cout << endl;
    return 0;
}*/

// HOLLOW DIAMOND PATTERN
// Enter any Number: 4
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *
int main(){
    int n;
    cout << "Enter any Number: ";
    cin >> n;

    // TOP
    for (int i = 0; i < n; i++)
    {

        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << '*';

        if (i != 0)
        {
            // spaces
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }

            cout << '*';
        }

        cout << endl;
    }


    // BOTTOM
    for (int i = 0; i < n - 1; i++)
    {
        // spaces
        for (int j = 0; j < i + 1; j++)
        {
            cout << ' ';
        }

        cout << '*';

        if (i != n - 2)
        {
            // spaces
            for (int j = 0; j < 2 * (n - i) - 5; j++)
            {
                cout << ' ';
            }

            cout << '*';
        }
        cout << endl;
    }

    return 0;
}

//BUTTERFLY PATTERN
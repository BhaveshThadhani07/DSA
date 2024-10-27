#include <iostream>
using namespace std;

// 01) BASIC INPUT/OUTPUT IN C++
int main()
{
    // 1. COUT
    /*char sample[] = "GeeksForGeeks";
    cout << sample << " - A computer science portal for Geeks";*/

    // 2. CIN
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "\nYour age is: " << age << endl;

    // 3. CERR
    // The C++ cerr is the standard error stream that is used to output the errors. This is also an instance of the iostream class. As cerr in C++ is un-buffered so it is used when one needs to display the error message immediately. It does not have any buffer to store the error message and display it later.
    // The main difference between cerr and cout comes when you would like to redirect output using “cout” that gets redirected to file if you use “cerr” the error doesn’t get stored in file.(This is what un-buffered means ..It cant store the message)
    cerr << "An error occurred\n";

    // 4. CLOG
    // buffered standard error stream (clog): This is also an instance of ostream class and used to display errors but unlike cerr the error is first inserted into a buffer and is stored in the buffer until it is not fully filled. or the buffer is not explicitly flushed (using flush()). The error message will be displayed on the screen too.
    clog << "An error occurred";

    return 0;
}

// 02) CIN IN C++
// 03) COUT IN C++
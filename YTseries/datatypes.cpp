#include <iostream>
using namespace std;

int main()
{
    // 01) Size of all the data types by using the sizeof() operator
    cout << "Size of all the data types by using the sizeof() operator " << endl;
    cout << "Size of char: " << sizeof(char) << endl;

    cout << "Size of boolean: " << sizeof(bool) << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

    cout << "Size of int: " << sizeof(int) << endl;

    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl
         << endl;
    // cout << "Size of void: " << sizeof(void) << endl;    //Not Defined

    // ------------------------------------------------------------
    // 02) C++ program to Demonstrate the sizes of data types

    cout << "C++ program to Demonstrate the sizes of data types" << endl;
    cout << "Size of char : " << sizeof(char) << " byte"
         << endl;

    // cout << "char minimum value: " << CHAR_MIN << endl;

    // cout << "char maximum value: " << CHAR_MAX << endl;

    cout << "Size of int : " << sizeof(int) << " bytes"
         << endl;

    cout << "Size of short int : " << sizeof(short int) << " bytes" << endl;

    cout << "Size of long int : " << sizeof(long int) << " bytes" << endl;

    cout << "Size of signed long int : "
         << sizeof(signed long int) << " bytes" << endl;

    cout << "Size of unsigned long int : "
         << sizeof(unsigned long int) << " bytes" << endl;

    cout << "Size of float : " << sizeof(float) << " bytes" << endl;

    cout << "Size of double : " << sizeof(double) << " bytes" << endl;

    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl
         << endl;

    long long de = 40;
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of d (which is a long long datatype): " << sizeof(de) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl << endl;

    // ------------------------------------------------------------
    // 03) This program declares variables of various data types, assigns values to them, and then prints out their values.

    cout << "This program declares variables of various data types, assigns values to them, and then prints out their values." << endl;

    int a = 10;
    short b = 20;
    long c = 30;
    long long d = 40;
    cout << "Integer data types: " << endl;
    cout << "int: " << a << endl;
    cout << "short: " << b << endl;
    cout << "long: " << c << endl;
    cout << "long long: " << d << endl;

    // Floating-point data types
    float e = 3.14f;
    double f = 3.141592;
    long double g = 3.14159265358979L;
    cout << "Floating-point data types: " << endl;
    cout << "float: " << e << endl;
    cout << "double: " << f << endl;
    cout << "long double: " << g << endl;

    // Character data types
    char h = 'a';
    wchar_t i = L'b';
    char16_t j = u'c';
    char32_t k = U'd';
    cout << "Character data types: " << endl;
    cout << "char: " << h << endl;
    wcout << "wchar_t: " << i << endl;
    cout << "char16_t: " << j << endl;
    cout << "char32_t: " << k << endl;

    // Boolean data type
    bool l = true;
    bool m = false;
    cout << "Boolean data type: " << endl;
    cout << "true: " << l << endl;
    cout << "false: " << m << endl;

    // String data type
    string n = "Hello, world!";
    cout << "String data type: " << endl;
    cout << n << endl;

    return 0;
}
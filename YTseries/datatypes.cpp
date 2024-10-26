#include <iostream>
using namespace std;

// 01) DATATYPES
/*int main()
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
}*/

// 02) LITERALS
/*int main()
{
    // constant integer literal
    // %d - prints the value of the int variable num in decimal number system. %o - prints the value of the int variable num in octal number system.
    // 1. Integer Literal
    const int intDec = 10;
    const int intOct = 05437;
    const int intHex = 0x65;
    const int intBin = 0b1010010;
    printf("DEC Integer Literal: %d\n", intDec);
    printf("HEX Integer Literal: %d\n", intHex);
    printf("OCT Integer Literal: %d\n", intOct);
    printf("BIN Integer Literal: %d\n", intBin);

    // 2. Float Literal
    // constant float literal
    const float floatVal1 = 4.14;
    const float floatVal2 = 3.1235;
    printf("Floating point literal: %.2f\n", floatVal1);
    printf("Floating point literal: %.4f\n", floatVal2);

    // 3. Character Literal
    // constant char literal
    const char charVal = 'A';
    printf("Character Literal: %c\n", charVal);

    // 4. String Literal
    const char str[] = "Welcome\nto\nGeeks\tfor\tGeeks";
    printf("%s",str);

    return 0;
}*/

// 03) ESCAPE SEQUENCE
int main()
{
    // output may depend upon the compiler
    printf("My mobile number "
           "is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a");

    // \b - backspace character transfers
    // the cursor one character back with
    // or without deleting on different
    // compilers.
    printf("Hello \b\b\b\b\b\bHi Geeks");

    // Here we are using \n, which is a new line character.
    printf("Hello\n");
    printf("GeeksforGeeks");

    // Here we are using \t, which is
    // a horizontal tab character.
    // It will provide a tab space
    // between two words.
    printf("Hello \t GFG");

    // Here we are using \v, which
    // is vertical tab character.
    printf("Hello friends\v");
    printf("Welcome to GFG");

    // Here we are using \r, which
    // is carriage return character.
    printf("Hello   Geeks \rGeeksfor");

    // Here we are using \,
    // It contains two escape sequence
    // means \ and \n.
    printf("Hello\\GFG");

    // C program to illustrate \' escape
    // sequence/ and \" escape sequence to
    // print single quote and double quote.
    printf("\' Hello Geeks\n");
    printf("\" Hello Geeks");

    // Here we are using \?, which is
    // used for the presentation of trigraph
    // in the early of C programming. But
    // now we don't have any use of it.
    printf("\?\?!\n");

    // we are using \OOO escape sequence, here
    // each O in "OOO" is one to three octal
    // digits(0....7).
    // char* s1 = "A\072\065";
    // printf("%s", s1);

    // We are using \xhh escape sequence.
    // Here hh is one or more hexadecimal
    // digits(0....9, a...f, A...F).
    // char* s2 = "B\x4a";
    // printf("%s", s2);

    return 0;
}



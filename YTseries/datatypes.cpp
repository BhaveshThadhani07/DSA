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
/*int main()
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
}*/

// 04) DERIVED DATA TYPES IN C++
// 1. FUNCTIONS
/*int max(int x, int y)
{
     if (x > y)
          return x;
     else
          return y;
}
int main()
{
     int a = 10, b = 20;

     int m = max(a, b);

     cout << "Maximum is  "  << m;
     return 0;
}*/

// 2. ARRAYS
// integer array ‘arr’ and assigns values using indices. Then it prints all the array elements
/*int main()
{
     int arr[5];
     arr[0] = 5;
     arr[2] = -10;

     // this is same as arr[1] = 2
     arr[3/2] = 2;

     arr[3] = arr[0];

     cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3];

     return 0;
}*/

// 3. POINTERS
// Pointers are symbolic representation of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures.

/*void geeks()
{
     int number = 5;

     // declare pointer variable
     int *ptr; // This declares a pointer to an integer

     // datatype of ptr & var must be same
     ptr = &number; // here the variable ptr(which is declared earlier) holds the memory address for the variable var which stores the value 20 in it

     // assign the address of a variable to a pointer
     cout << "Value of number: " << number << endl;               // Outputs 5
     cout << "Address of number: " << &number << endl;            // Outputs the memory address of 'number'
     cout << "Value of ptr (address of number): " << ptr << endl; // Same as &number
     cout << "Value pointed to by ptr: " << *ptr << endl;         // Outputs 5 (value of 'number' via pointer)
}
int main()
{
     geeks();
}*/

// Why Use Pointers?
// Direct Memory Access: You can modify values in memory directly.
// Efficient Function Arguments: Pass large data (like arrays or structs) by address instead of copying them.
// Dynamic Memory Management: Pointers allow dynamic allocation and deallocation of memory.

// 4. REFERENCE
// A reference is like an alias or another name for a variable, allowing us to work with the same data using different names.
int main()
{
     int x = 10;

     int& ref = x;  // We create a reference 'ref' that refers to 'x'.
                     // Now 'ref' is another name for 'x', so any changes made to 'ref' affect 'x', and vice versa.

     // We assign 20 to 'ref', which is a reference to 'x'.
     //         This changes the value of 'x' to 20, since 'ref' and 'x' are essentially the same variable.
     //value of x is now changed to 20
     ref = 20;
     cout << "x = " << x << endl;

     //value of x is now changed to 30
     x = 30;
     cout << "ref = " << ref << endl;

     return 0;
}

// This concept is helpful when we want to work with the same variable under different names, especially in functions, where passing by reference can avoid unnecessary copies.

// ------------------------------------------------
// 05) USER DEFINED DATA TYPES IN C++
// 1. CLASS
/*class Geeks{
// access specifier
public:
     // *data members
     string geekname;

     // *member functions
     void printname(){
          cout << "Geekname is: " << geekname;
     };

};*/

/*int main()
{
//Declare an object of class Geeks
     Geeks obj1;

//accessing data member
     obj1.geekname="GeeksForGeeks";

//accessing member function
     obj1.printname();

     return 0;
}*/
// Explaination: The above program defines a class named “Geeks” with a geekname attribute and a function printname() to print the geek’s name. In the main function, it creates an object named obj1, sets the geekname as “GeeksforGeeks”, and calls the printname() function to display it.

// 2. STRUCTURE
/*struct Point{
     int x, y;
};

int main()
{
     // Create an array of structures
    struct Point arr[10];

    // Access array members
    arr[0].x = 10;
    arr[0].y = 20;

    cout << arr[0].x << ", " << arr[0].y;
     return 0;
}*/

// 3. UNION
/*union test {
     int x, y;
};

int main()
{
     union test t;

     t.x = 2;

     cout << "After making the value of x = 2, " << endl << "value of x: " << t.x << endl << "value of y: " << t.y << endl << endl;

     t.y = 10;
     cout << "When y = 10, " << endl << "value of x: " << t.x << endl << "value of y: " << t.y << endl << endl;

     return 0;
}*/
// Explaination: Union named “test” with integer members x and y is defined, here x and y shares the same memory space. In the main function value of x is set to 2 and then printed. Later, it updates y to 10 and the value of x is also updated to 10, this shows the shared memory characteristic of unions.

// 4. ENUMERATION
/*enum week {mon, tue, wed, thur, fri, sat, sun};

int main()
{
     enum week day;

     day = wed;

     cout << "Day: " << day;

     return 0;
}*/

// 5. TYPEDEF
// C++ allows you to define explicitly new data type names by using the keyword typedef. Using typedef does not create a new data class, rather it defines a name for an existing type. This can increase the portability(the ability of a program to be used across different types of machines; i.e., mini, mainframe, micro, etc; without many changes to the code)of a program as only the typedef statements would have to be changed. Using typedef one can also aid in self-documenting code by allowing descriptive names for the standard data types.

/*typedef unsigned char BYTE;

int main()
{
     BYTE b1, b2;
     b1 = 'c';
     cout << " " << b1;
     return 0;
}*/

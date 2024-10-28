# include <iostream>
using namespace std;

// DECISION MAKING IN C++

// 1) C++ IF STATEMENT
/*int main()
{
    int i = 10;
    if (i<15)
    {
        cout << "10 is less than 15\n";
    }
    cout << "I am Not in if";
    return 0;
}*/

// 2) C++ IF ELSE STATEMENT
/*int main()
{
    int i = 20;

    if (i==10)
        cout << "10 is less than 15\n";

    else 
        cout << "is is 20\n";

    return 0;
}*/


// 3) C++ IF ELSE IF LADDER
/*int main()  
{  
    int i = 20;  
    
    // Check if i is 10  
    if (i == 10)  
        cout << "i is 10";  
    
    // Since i is not 10  
    // Check if i is 15  
    else if (i == 15)  
        cout << "i is 15";  
    
    // Since i is not 15  
    // Check if i is 20  
    else if (i == 20)  
        cout << "i is 20";  
    
    // If none of the above conditions is true  
    // Then execute the else statement  
    else
        cout << "i is not present";  
    
    return 0;  
}*/

// 4) C++ NESTED IF-ELSE STATEMENT
/*int main()
{
    int year = 2023;

    if (year % 4 == 0) {
        // first nested if-else statement
        if (year % 100 == 0) {
            // second nested if-else statement
            if (year % 400 == 0) {
                cout << year << " is a leap year.";
            }
            else {
                cout << year << " is not a leap year.";
            }
        }
        else {
            cout << year << " is a leap year.";
        }
    }
    else {
        cout << year << " is not a leap year.";
    }

    return 0;
}*/

// 5) PROBLEM - GRADE CALCULATOR
/*int main()
{
    cout << "Enter your exam score: ";

    int examScore;
    cin >> examScore;

    if (examScore >= 90)
    {
        cout << "Your grade is A" << endl;
    }
    else if (examScore >= 80)
    {
        cout << "Your grade is B" << endl;
    }
    else if (examScore >= 70)
    {
        cout << "Your grade is C" << endl;
    }
    else if (examScore >= 60)
    {
        cout << "Your grade is D" << endl;
    }
    else
    {
        cout << "Your grade is F" << endl;
    }

    return 0;
}*/

// 6) SWITCH STATEMENTS IN C++

// Rules:
// The case value must be either int or char type.
// There can be any number of cases.
// No duplicate case values are allowed.
// Each statement of the case can have a break statement. It is optional.
// The default Statement is also optional.
/*int main()
{
    char x = 'Z';

    switch (x)
    {
    case 'A':
        cout << "Choice is A";
        break;
    case 'B':
        cout << "Choice is B";
        break;
    case 'C':
        cout << "Choice is C";
        break;
    default:
        cout << "Choice is other than A, B & C";
        break;
    }

    return 0;
}*/
/*int main(){
    int var1 = 1;
    int var2 = 0;
    int var3 = 2;

    switch (var1)
    {
    case 0:
        cout << "Outer Switch Case 0\n";
        break;
    case 1:
        cout << "Outer Switch Case 1\n";
        switch (var3)
        {
        case 0:
            cout << "Inner Switch Case 0\n";
            break;
        case 1:
            cout << "Inner Switch Case 1";
            break;

        default:
            cout << "Switch Case other than 0 & 1";
            break;
        }
    default:
        break;
    }

    return 0;
}*/

// 7) JUMP STATEMENTS IN C++
/*In C++,  there is four jump statement

1. break
2. continue
3. goto
4. return*/

/*void findGreater(int x, int y)
{
    if (x > y)
    {
        cout << x << " is greater than " << y << endl;
        return;
    }
    else{
        cout << y << " is greater than " << x << endl;
        return;
    }
}*/
// int main()
// {
// 1.Continue & 2.Break
    /*for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue;
            // break;
        cout << i << " ";
        
    };*/

// 3.Return
    /*cout << "Begin ";
    for (int j = 0; j < 10; j++)
    {
        if (j == 5)
            return 0;
        cout << j << " ";
    }
    cout << "end";*/
    // Explanation
    // The above program starts execution by printing “Begin” and then the for loop starts to print the value of, it will print the value of i from 0 to 4 but as soon as i becomes equal to 5 it will terminate the whole function i.e., it will never go to print the “end” statement of the program.

    //for void function - return
    // The return in void() functions can be used without any return type.
    // findGreater(5,6);

// 4.GoTo
// Note: The goto statement makes it difficult to understand the flow of the program therefore it is avoided to use it in a program.

//     int n = 5;

//     if (n % 2 == 0)
//         goto label1;
//     else 
//         goto label2;    

//     label1:
//         cout << "Even" << endl;
//         return 0;
//     label2:
//         cout << "Odd" << endl;

//     return 0;
// }

// LOOPS

// 1) FOR LOOP

int main()
{
    // 1. Backward Loop
    /*int n = 5;
    for (int i = n; i >= 0; i--)
    {
        cout << i << " ";
    }*/

    // 2. Nested Loops
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}



#include <iostream>
using namespace std;

int printHello(){
    cout << "hello\n";
    return 3;
}

int sum(int a, int b){
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    int s = a+b;
    return s;
}

int main(){
    int val = printHello();
    cout << "val = " << val << endl;
    cout << printHello() << endl << endl;

    cout << "Sum function: " << sum(3,2);

    return 0;
}
// int main(){
//     int val = printHello();
//     cout << "val = " << val << endl;
//     cout << printHello() << endl << endl;

//     cout << "Sum function: " << sum(3,2);

//     return 0;
// }
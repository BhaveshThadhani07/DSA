#include <iostream> //this is our preprocessive directive, this state. will be written in each file
using namespace std;    //we want to use a namespace called std in our whole file

int main(){     //this is the main func. through which we are telling the compiler that from this point our code is getting started
    // std::cout << "DSA Series";   //when you not write & include std, then you have to write the statement like this
    // cout << "Youtube DSA Series";
    cout << "Youtube DSA Series" << endl;   //endl means end of line means to move to the next line | instead of endl "\n" can also be written which is faster than endl
    cout << "Youtube DSA Series" << "\n";   
    cout << "Youtube DSA Series\n 2024-25 \n";   

    cout << "04 Youtube DSA Series " << "2024-25\n" << "Copyright" << endl;   
    cout << "Bhavesh \nThadhani";
    return 0;   //since this is an integer function we have to return an integer at the end of the func., here we are returning 0, it's a good practice
    // g++ filename.exe -> to complie our file, new executable file 'll also get created. A new file 'll also get created for windows users -> a.exe & for mac -> a.out
    // to run the executable file in the terminal, write -> ./a.exe | You will get the output
    // to remove the trailing element at the end of the line in terminal, we have to give either \n or endl
    // to write both the lines simultaneously -> g++ code.cpp && ./a.out
}

// The following is the Boilerplate Code

// #include <iostream>
// using namespace std;

// int main(){
//     return 0
// }
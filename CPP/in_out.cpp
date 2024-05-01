#include <iostream>
using namespace std;

int main() {
    string user_input;

    cout << "Hello world " << endl ;  // This prints "Hello world" but does not wait for input.
    // getline(cin, userInput); TO GET STRING
    cin >> user_input;     // This statement waits for user input after "Hello world" is printed.

    cout << user_input  << endl;    // This prints the user's input.

    return 0;
}

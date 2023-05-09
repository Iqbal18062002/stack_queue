#include <iostream>
#include <stack>
using namespace std;

int main() {
    // create a stack of strings
    stack<string> languages;
    
    // add element to the Stack
    languages.push("C++");
    languages.push("Java");
    languages.push("Python");
    
    // print top element
    cout << languages.top()<<endl;

    languages.pop();

    // let's see what's the first now
    cout << languages.top()<<endl;

    // Now let's see its size
    cout << languages.size()<<endl;

    // Finally let's check if it's null
    cout << languages.empty()<<endl;
    return 0;
}
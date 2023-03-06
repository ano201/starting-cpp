#include <iostream>

int main()
{
    using namespace std;

    string name;
    int age;

    // cout << "What is your name?: ";
    // cin >> name; // without space

    // cout << "what is your age?: ";
    // cin >> age;

    // cout << "What is your full name?: ";
    // getline(cin >> ws, name);

    cout << "What is your full name?: ";
    getline(cin, name);

    cout << "what is your age?: ";
    cin >> age;

    cout << "Hello " << name << "\n";
    cout << "You are " << age << " years old";
    return 0;
}
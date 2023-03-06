#include <iostream>

int main()
{
    using std::cout;

    int correct = 9;
    int question = 10;
    double score = correct / (double)question * 100;

    cout << score << "%";

    return 0;
}
#include <iostream>

using namespace std;
int main() {
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int* numbers = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        cout<< numbers[i];
        if(i < n  -1)
        {
            cout<<" +";
        }
        sum += numbers[i];
    }cout << " = " << sum << endl;
    cout << "The result of sum number: " << sum <<endl;
    delete[] numbers;

    return 0;
}

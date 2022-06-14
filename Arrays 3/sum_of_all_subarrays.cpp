#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = sum + a[j];
            cout << sum << endl;
        }
        sum = 0;
    }

    return 0;
}
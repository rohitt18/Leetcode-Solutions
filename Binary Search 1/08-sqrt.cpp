#include <iostream>
using namespace std;

long long int sqrtInteger(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;

    while (s <= e)
    {

        // int square = mid*mid;
        // what if mid = 2^31 (huge integer) out of range
        // therefore we use long long int

        long long int square = mid * mid;

        if (square == n)
        {
            ans = mid;
            return mid;
        }
        else if (square > n)
        {
            e = mid - 1;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{

    int n;
    cout << "Enter the no. ";
    cin >> n;

    int tempSol = sqrtInteger(n);

    cout << "Ans is " << tempSol << endl;
    cout << "Ans is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}
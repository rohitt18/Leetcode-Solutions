#include <iostream>
using namespace std;

// // TAIL RECURSION
// void print(int n){

//     // base case
//     if(n==0){
//         return;
//     }

//     // print (processing)
//     cout << n <<" ";

//     // recursive relation
//     print(n-1);
// }

// HEAD RECURSION
void print(int n){

    // base case
    if(n==0){
        return;
    }

    // recursive relation
    print(n-1);

    // print (processing)
    cout << n <<" ";

}

int main()
{
    int n;
    cin >> n;

    print(n);

    return 0;
}
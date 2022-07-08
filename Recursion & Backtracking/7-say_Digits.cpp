#include <iostream>
using namespace std;

void sayDigit(int n,string arr[]){

    // base case
    if(n==0)
        return;

    // processing
    int digit = n%10;
    n = n/10;

    // RR 
    sayDigit(n,arr);  // already update toh kar diya hai n ko toh vapas n ke liye tu solve karde

    cout<<arr[digit]<<" ";

}

int main()
{
    string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    int n;
    cin >> n;

    sayDigit(n,arr);

    return 0;
}
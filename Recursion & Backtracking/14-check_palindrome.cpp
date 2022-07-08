#include <iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){

    // base case
    if(i>j) return true;

    if(str[i] != str[j]) return false;

    if(str[i] == str[j]){
        i++;
        j--;
    }
    return checkPalindrome(str,i,j);
}

int main()
{
    string str;
    cin>>str;

    bool ans = checkPalindrome(str,0,str.length()-1);

    if(ans){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"NOT Palindrome"<<endl;
    }

    return 0;
}
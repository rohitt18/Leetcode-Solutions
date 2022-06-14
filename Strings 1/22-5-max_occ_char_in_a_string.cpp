#include <iostream>
using namespace std;

char getMaxOccCharacter(string s){

    int arr[26] = {0};

    // create an array of count of characters
    for(int i=0;i<s.length();i++){
        int number = 0;
        // lower case
        if(s[i]>='a' && s[i]<='z'){
            number = s[i] - 'a';
        }
        // upper case
        else{
            number = s[i] - 'A';
        }
        arr[number]++;  
    }
    
    int maxi = -1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi < arr[i]){
            maxi = arr[i];
            ans = i;
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
  string s;
  cin>>s;

  cout<<getMaxOccCharacter(s)<<endl;

  return 0;
}
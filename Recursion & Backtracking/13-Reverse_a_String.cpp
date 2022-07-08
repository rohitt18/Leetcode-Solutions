#include <bits/stdc++.h>
using namespace std;

void reverse(string& str, int s, int e){

    // base case
    if(s>e) return;
    
    swap(str[s],str[e]);
    s++;
    e--;
    
    reverse(str,s,e);

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; 

        string name; 
        cin>>name;

        // for (int i = 0; i < n; i++)
        // {
        //     cin >> str[i];
        // }

        int s = 0;
        int e = n-1;

        reverse(name, s, e);

        cout << name << endl;
    }
}
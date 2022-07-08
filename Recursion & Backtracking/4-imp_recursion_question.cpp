#include <iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<<"source "<<src<<" destination "<<dest<<endl;

    // BC
    if(src == dest){
        cout<<"pohoch gaya"<<endl;
        return;
    }

    // processing - ek step aage badhjao
    src++;

    // RR
    reachHome(src,dest);

}

int main()
{
    int dest = 10; 
    int src = 1;

    reachHome(src,dest);

    return 0;
}
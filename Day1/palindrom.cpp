
#include <iostream>
using namespace std;

int main() {
    int x ;
    cin>>x;
    int org = x;
    int rev = 0;
    while(x>0){
        int digit = x%10;
        rev = rev * 10 + digit;
        x=x/10;
    }

    if(rev == org){
        cout<<"its a palidrom";
    }
    else{
        cout<<"its not";
    }

    return 0;
}
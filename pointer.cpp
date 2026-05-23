#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    int* ptr2; //4
    int* ptr1 = ptr2 + 2; //4+4

    cout<<ptr1 - ptr2;
    return 0;
}
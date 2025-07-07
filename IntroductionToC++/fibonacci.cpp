#include<iostream>
using namespace std;
int main(){
    int first=0,second=1,next,num;
    cout << "Enter the  number of terms of fibonacci series: ";
    cin >> num;
    cout << first<<" " << second<<" ";
    for(int i=1;i<=num;i++){
        next=first+second;
        first=second;
        second=next;
        cout << next<<" ";
    }
    return 0;

}
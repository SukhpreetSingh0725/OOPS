#include<iostream>
using namespace std;
int main(){
    int num;
    int answer=0,reminder,multiply=1;
    cout<<"Enter the Number: ";
    cin>>num;
    int b=num;
    while(num>0){
        reminder=num%8;
        num=num/8;
        answer=(reminder*multiply)+answer;
        multiply*=10;
    }
    cout <<"Binary of "<<b<<" is "<<answer;
    return 0;
}
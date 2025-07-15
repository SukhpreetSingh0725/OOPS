#include<iostream>
using namespace std;
int main(){
    int num;
    int answer=0,reminder,multiply=1;
    cout<<"Enter the Number: ";
    cin>>num;
    int b=num;
    while(num>0){
        reminder=num%10;
        num=num/10;
        answer=(reminder*multiply)+answer;
        multiply*=2;
    }
    cout <<"Decimal of "<<b<<" is "<<answer;
    return 0;
}
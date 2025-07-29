#include<iostream>
#include<cmath>
using namespace std;

int CountDigit(int n){
    
    int count=0;
    while(n>0){
        count++;
        n/=10;
    }
    return count;
}

bool Armstrong(int number,int digit){
    int n=number,ans=0,rem;
    while(n){
        rem=n%10;
        n/=10;
        ans=ans+round(pow(rem,digit));
    }
    
   return ans==number;
}


int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int digit=CountDigit(num);
   cout<<Armstrong(num,digit);
}
